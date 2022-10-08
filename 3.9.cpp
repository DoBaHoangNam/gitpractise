#include <stdio.h>

int main ()
{
	char a; 
	printf("Nhap vao mot ki tu: ");
	scanf("%c",&a);
	printf("Ma ASCII tuong ung la: %d",a);
	
	int b; 
	printf("\nNhap vao mot so nguyen tu 1 den 255: ");
	scanf("%d",&b);
	printf("Ma ASCII tuong ung la: %c",b);
}
