#include <stdio.h>
#include <conio.h>
 main()
 {int m,n,i,j;
  printf("Nhap cap cua ma tran A(m,n) va cap ma tran B(m,n) :");
  do{printf("\n Note: m,n>=1");
     printf("\n m= "); scanf("%d",&m);
     printf("\n n= "); scanf("%d",&n);}
  while(m<1||n<1);
  int A[m][n],B[m][n],C[m][n];
  printf("\n Nhap cac phan tu cua ma tran A:");
  for(i=0;i<m;i++)
     for(j=0;j<n;j++)
        {printf ("\n Phan tu A(%d;%d)=",i+1,j+1);
         scanf("%d",&A[i][j]);}
  printf("\n Nhap cac phan tu cua ma tran B:");
  for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         {printf ("\n Phan tu B(%d;%d)=",i+1,j+1);
          scanf("%d",&B[i][j]);}
  printf("\n Ma tran A la :\n");
  for(i=0;i<m;i++)
     {printf("\n\n");
      for(j=0;j<n;j++) printf("%6d",A[i][j]);}
  printf("\n Ma tran tong B la :\n");
  for(i=0;i<m;i++)
     {printf("\n\n");
      for(j=0;j<n;j++) printf("%6d",B[i][j]);}
  for(i=0;i<m;i++)
     for(j=0;j<n;j++)
         C[i][j]=A[i][j]+B[i][j];
  printf("\n Ma tran tong C=A+B la :\n");
  for(i=0;i<m;i++)
     {printf("\n\n");
      for(j=0;j<n;j++) printf("%6d",C[i][j]);}
  getch();
 }
