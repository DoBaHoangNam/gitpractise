#include <stdio.h>
#include <conio.h>
 main()
 {
 int n,T;
  do 
	{
	printf("Nhap vao so nguyen duong n<1000 :");
	scanf("%d",&n);
	}while(n<=0||n>=1000);
  T=n/100+(n/10)%10+(n%100)%10;
  printf("\n Tong cac chu so cua %d la T=%d .",n,T);
  getch();
 }
