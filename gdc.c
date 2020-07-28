#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void main()
{
	FILE *ptr;
	int i;
	int x,y,result;
	ptr=fopen("gcd","w+");
	printf("enter the 2 nos");
	scanf("%d%d",&x,&y);
	fprintf(ptr,"%d   %d",x,y);

	
	
	 for(i=1; i <= x && i <= y; ++i)
    {
        // Checks if i is factor of both integers
        if(x%i==0 && y%i==0)
        {
		
            result=i;
        }
    }
    printf("%d",result);
    fprintf(ptr,"%d",result);
    	fclose(ptr);
	}
