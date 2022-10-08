#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float x,y,z,F;
printf("\n x= ");
scanf("%f",&x);
printf("\n y= ");
scanf("%f",&y);
printf("\n z= ");
scanf("%f",&z);
F=(((x+y+z)/(pow(x,2) + y*y + 1)) - abs(x-z*cos(y)));
printf(" F = %f",F);
}
