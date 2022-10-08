#include <stdio.h>
#include <conio.h>
 main()
{
	int a1,b1,a,b,UCLN,BCNN;
	do 
	{
	printf("Nhap vao 2 so nguyen duong:");
	printf("\n a=");scanf("%d",&a);
	printf("\n b=");scanf("%d",&b);
	}while(a<=0||b<=0);
  a1=a;b1=b;
  while (a!=b)
        {
		if (a>b) a=a-b;
         else b=b-a;
		}
  printf("\n %d la UCLN(%d;%d).",a,a1,b1);
  printf("\n %d la BCNN(%d;%d).",a1*b1/a,a1,b1);
  getch();
 }
