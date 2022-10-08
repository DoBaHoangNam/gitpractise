#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
 	char dslop[10][30],s[30];
	int i,j,n;
	do 
	{
	printf("Nhap vao so sinh vien cua lop 0<n<=10 :");
    scanf("%d",&n);
	}while(n<=0||n>10);
	
    for(i=0;i<n;i++) 
    {
		printf("\n Nhap ten sinh vien thu %d :",i+1);
    	dslop[i][0]=' ';
    	fflush(stdin);
		gets(s);
		strcat(dslop[i],s);
	}
    for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
          if(strcmp(strrchr(dslop[i],' '),strrchr(dslop[j],' '))>0)
            {
			strcpy(s,dslop[i]);
            strcpy(dslop[i],dslop[j]);
            strcpy(dslop[j],s);
			}
  printf("\n Danh sach hoc sinh sap xep theo ABC la:\n");
  for(i=0;i<n;i++) 
    {
	printf(" %d.",i+1);
    puts(dslop[i]);
	}
  getch();
 }
