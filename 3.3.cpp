#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float X,Y,F;
	printf("\n Nhap X=");
	scanf("%f",&X);
	printf("\n Nhap Y=");
	scanf("%f",&Y);
	F = pow(Y,6)+ X*pow(Y,5)+ pow(X,2)*pow(Y,4)+ pow(X,3)*pow(Y,3)+ pow(X,4)*pow(Y,2)+ pow(X,5)*Y + pow(X,60);
	printf("\n Gia tri cua F=%.2f",F );
	}
	
	
