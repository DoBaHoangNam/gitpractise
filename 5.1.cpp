#include <stdio.h>
#include <conio.h>
main()
{
	int n,i,a[9],tg,demtb,dem0,x,d;
	float tb;
	tg=0;tb=0;
	demtb=0;dem0=0;
	d=0;
	do 
  	{
		printf("Nhap vao so phan tu cua day 0<n<10 :");
    	scanf("%d",&n);
	}while(n<=0||n>=10);
	
	printf("\n Nhap mang :");

	for(i=0;i<n;i++) 
    {
		printf("\n Nhap so thu %d :",i+1);
    	scanf("%d",&a[i]);
	}
	printf("\n Day so vua nhap la: \n");
  
	for(i=0;i<n;i++) 
    {
		printf("%d   ",a[i]);
    	if(a[i]>0) tg= tg+ a[i];
    	if(a[i]==0) dem0=dem0+1;
    	if(a[i]<0) {tb = tb+ a[i];demtb=demtb+1;}
	 }
	if(demtb==0) printf("\n Khong co so am nao trong day.");
	else printf("\n Trung binh cong cac so am trong day la %f",tb*1.0/demtb);
	
	if(tg==0) printf("\n Khong co so duong nao trong day.");
	else printf("\n Tong cac so duong trong day la %d",tg);
	
	printf ("\n So cac so 0 trong day la %d",dem0);
	
	printf("\n Nhap so nguyen x bat ki : ");
	scanf("%d",&x);
	printf("\n Vi tri cac so trong day co gia tri %d la : ",x);
	for(i=0;i<n;i++) if(a[i]==x) {printf("%d   ",i+1);d++;}
	if(d==0) printf("khong co so nao trong day dat gia tri %d",x);
	getch();
 }
