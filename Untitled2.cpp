#include <stdio.h>
#include <conio.h>
int main()
{
	int a,s=0,n;
	printf("Nhap n=");scanf("%d",&n);
	while(n>0 && n!=0)
	{
		a=n%10;
		s=s+a;
		n=n/10;
		}
	if(s%3==0) printf("So %d nhap vao chia het cho 3",a);
	else printf("So nhap vao khong chia het cho 3",s);
	getch();
	return 0;
	}
