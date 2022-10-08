#include <stdio.h>

int main()
{
	int a ;
	printf("Nhap vao mot so nguyen tu 0 den 9: ");
	scanf("%d",&a);
	switch (a)
	{
		case 0: printf("KHONG");break;
		case 1: printf("MOT");break;
		case 2: printf("HAI");break;
		case 3: printf("BA");break;
		case 4: printf("BON");break;
		case 5: printf("NAM");break;
		case 6: printf("SAU");break;
		case 7: printf("BAY");break;
		case 8: printf("TAM");break;
		case 9: printf("CHIN");break;
		default: printf("SO KHONG HOP LE");
	}
	
}
