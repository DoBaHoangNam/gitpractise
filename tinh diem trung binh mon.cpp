#include <stdio.h>

int main()
{
    float a1, b1, c1, a2, b2, a3;
    int TB;

    
    scanf ("%f",&a1);
    scanf ("%f",&b1);
    scanf ("%f",&c1);
    scanf ("%f",&a2);
    scanf ("%f",&b2);
    scanf ("%f",&a3);
    
    TB=((a1+b1+c1) + (a2+b2)*2 + a3*3)/10;
    
    if(TB%2==0)  printf("%.0f",TB);
    else printf("%.1f",TB);a
    
    
    return 0;
}
	
