#include <stdio.h>
#include <conio.h>
 main()
 {
 int i,n,a[10],b[10],c[10],am,duong;
  float tb;
  do 
 	{
  	printf("Nhap vao so phan tu cua day 0<n<=10 :");
    scanf("%d",&n);
 	}while(n<=0||n>10);
  printf("\n Nhap mang :");
  
  for(i=0;i<n;i++) 
    {
	 printf("\n Nhap so thu %d :",i+1);
      scanf("%d",&a[i]);
	}
	
  am=0;duong=0;
  
  for(i=0;i<n;i++)
    {
	if (a[i]>0) {b[duong]=a[i];duong++;
	}
      if (a[i]<0) {c[am]=a[i];am++;}}
      if (duong==0) printf("\n Mang b khong co phan tu nao.");
      else 
        {
		 	printf("\n Mang b :\n");
        	for(i=0;i<duong;i++) printf("%d   ",b[i]);
		}
	  if (am==0) printf("\n Mang c khong co phan tu nao.");
      else 
       	{
			printf("\n Mang c :\n");
          	for(i=0;i<am;i++) printf("%d  ",c[i]);
		}
  getch();
 }
