#include <stdio.h>
#include <math.h>
main ()
{
	
	int n,i, kt=0;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	if (n<=1) printf("\n %d khong phai la so nguyen to.",n);
	else 
	{
		for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			kt++;
			break;
		}
		if(kt==0) printf("\n %d la so nguyen to.",n);
		else printf("\n %d khong phai la so nguyen to.",n);
		
	}
}
