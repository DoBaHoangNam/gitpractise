#include <stdio.h>
#include <conio.h>
#include <math.h>
 main()
 {
	int i,n,t;
	float x,S;
	do 
	{
		printf("Nhap vao so nguyen duong n=");
		scanf("%d",&n);
	}while(n<=0);
	printf("\n Nhap so thuc x=");
	scanf("%f",&x);
	
	S=1;
	for(i=1;i<n+1;i++) S=S+pow(x,i);
	printf("\n S=1+x+x^2-...+x^n=%f",S);
	
	S=1;
	for(i=1;i<n+1;i++) S=S+pow(-x,i);
	printf("\n S=1-x+x^2-...+(-1)^n.x^n=%f",S);
	
	S=1;t=1;
	for(i=1;i<n+1;i++) {t=t*i;S=S+pow(x,i)/t;}
	printf("\n S=1+x/1!+x^2/2!+...+x^n/n!=%f",S);
	getch();
 }
