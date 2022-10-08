#include <stdio.h>
#include <conio.h>
 main()
{
	int i; 
	float n,S,min,max;
	printf("Nhap mot day cac so thuc, viec nhap se ket thuc khi nhap vao gia tri 0");
	printf("\n Nhap so thuc thu 1 =");
	scanf("%f",&n);
	if(n==0) printf("\n Khong co phan tu nao duoc nhap.");
	else
	{
		S=n;min=n;max=n;
  		 for(i=2;1;i++)
    		{
	 			printf("\n Nhap so thuc thu %d =",i);
      			scanf("%f",&n);
      			if(n==0) {i--;break;}
     			if(min>n) min=n;
     			if(max<n) max=n;
     			S=S+n;
	}
 		printf("\n Trung binh cong cua day vua nhap la : %f",S/i);
		printf("\n Gia tri nho nhat cua day vua nhap la : %f",min);
  		printf("\n Gia tri lon nhat cua day vua nhap la : %f",max);
  	}
  getch();
 }
