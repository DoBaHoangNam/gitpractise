#include <stdio.h>

main ()
{
	int n,i,a;
	a=1;
	do 
	{
		printf("Nhap so nguyen n nho hon 8, lon hon 0: ");
		scanf("%d",&n);
	}while (n<0 || n>=8);
	
		for(i=1;i<n;i++)
	{
	a=a*i;
	}	
		
	printf("n! = %d ",a);
}
