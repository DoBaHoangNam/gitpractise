#include <stdio.h>

int main ()
{
	float a, b, c, A, B;
	printf("Nhap do dai cac canh: ");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if (a<b+c && b<a+c && c<a+b)
	printf("La 3 canh cua tam giac");
	else printf("Khong phai la 3 canh cua tam giac");
	
}
