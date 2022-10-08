#include <stdio.h>

main ()
{
	
	int i,s;
	float e, epsilon;
	do 
	{
		printf("Nhap so duong epsilon < 1: ");
		scanf("%f",&epsilon);
	}while (epsilon<=0 || epsilon>=1);
	e=1;
	s=1;
	i=2;
	do
	{
		e=e+1/s;
		s=s*i;
		i++;
	}while(1/s>epsilon);
	printf("\n Gia tri cua e = %f",e);
	
	
}
