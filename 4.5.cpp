#include <stdio.h>

main ()
{
	
	int n,a,i;
	
	do 
	{
		printf("Nhap so nguyen n: ");
		scanf("%d",&n);
	}while (n<10 || n>100);
	a=0;
	for(i=1;i<=n;i++)
	{
		a=a+i;
	}
	printf("Tong can tim la: %d",a);
}
