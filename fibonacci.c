#include<stdio.h>

int arrfib[20001][1000],k=1;

void fib(int n) 
{
    
		while(k<n)        
		{
			int carry=0;
			for(int j=999;j>=0;j--)
			{
				int var=arrfib[k][j]+arrfib[k-1][j]+carry;
				carry=var/10;		
				var = var%10;
				arrfib[k+1][j]=var;
			}
			k++;
		}
		int i=0;
		while(arrfib[n][i]==0 && i<1000)
			i++;            
		for(;i<1000;i++)
		{
			printf("%d",arrfib[n][i]);
		}
		printf("\n");
}
 

int main()
{
	arrfib[1][999]=1;
	int n;
	scanf("%d",&n);
	fib(n);
	return 0;
}