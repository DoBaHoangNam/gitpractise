#include <stdio.h>
#include <conio.h>
 main()
 {
 int n,i,j;
  float t,a[10];
  do 
	{
		printf("Nhap vao so phan tu cua day 0<n<=10 :");
    	scanf("%d",&n);
	} while(n<=0||n>10);
	
  printf("\n Nhap mang :");
  for(i=0;i<n;i++) 
    {
	  printf("\n Nhap so thu %d :",i+1);
       scanf("%f",&a[i]);
	}
	
  for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
          if (a[i]>a[j]) 
		  {
		 	t=a[i];
		  	a[i]=a[j];
		  	a[j]=t;
		  }
  printf("\n Day so theo thu tu tang dan la :\n");
  for(i=0;i<n;i++) 
  printf("%f   ",a[i]);
  
  printf("\n Day so theo thu tu giam dan la :\n");
  for(i=n-1;i>=0;i--) 
  printf("%f   ",a[i]);
  
  for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
          if (a[i]*a[i]<a[j]*a[j]) 
		  {
		  	t=a[i];
		  	a[i]=a[j];
		  	a[j]=t;
		  }
  printf("\n Day so theo thu tu giam dan theo gia tri tuyet doi la :\n");
  for(i=0;i<n;i++) printf("%f   ",a[i]);
  getch();
 }
