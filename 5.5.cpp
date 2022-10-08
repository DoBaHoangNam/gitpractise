#include <stdio.h>
#include <conio.h>
#include <string.h>
 main()
{
  typedef struct Hoso{
  char HoTen[40];
  float Diem;
  char Loai[10];} Hoso;
  int i,n;
  do
  {
  printf("\n Nhap vao so luong hoc sinh n>0 :");
  scanf("%d",&n);
  }while(n<=0);
  
  Hoso hs[n];
  char s[40];float d;
  for(i=0;i<n;i++) 
    {
	printf("\n Nhap ten hoc sinh thu %d:",i+1);
    fflush(stdin);gets(s);
    strcpy(hs[i].HoTen,s);
    do
	  {
	  printf("\n Diem hoc sinh nay 0<=diem<=10 : ");
      scanf("%f",&d); 
	  }while(d<0||d>10);
	  
      hs[i].Diem=d;
      if (d>8) strcpy(hs[i].Loai,"Gioi");
      if (d>6&&d<=8)strcpy(hs[i].Loai,"Kha");
      if (d>=5&&d<=6) strcpy(hs[i].Loai,"Trung binh");
      if (d<5) strcpy(hs[i].Loai,"Ko dat");
	}
  printf("\n%40s","XEP LOAI VAN HOA");
  printf("\n%-30s","HO VA TEN");
  printf("%-20s","DIEM");
  printf("%s","XEP LOAI");
  for(i=0;i<n;i++)
      printf("\n%-30s%-23.1f%s",hs[i].HoTen,hs[i].Diem,hs[i].Loai);
  getch();
 }
