#include <stdio.h>
#include <conio.h>
#include <math.h>
float function1 ()
{
	int n, i ;
    int a[n];
    float T = 0;
	printf("So lan di mua do cua Truong: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
   	{
	  printf("Nhap tien cua Truong: ");
      scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    	T = a[i] + T;
	}
	return T;
	
}

float function2 ()
{

	int n, i ;
    int a[n];
	float N;
	N=0;
	printf("\nSo lan di mua do cua Nam: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
   	{
	  printf("Nhap tien cua Nam: ");
      scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
	
		N = a[i] + N;
    }
    return N;
}

float function3 ()
{
	int n, i ;
    int a[n];
	float H;
	H=0;
	printf("\nSo lan di mua do cua Hieu: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
   	{
	  printf("Nhap tien cua Hieu: ");
      scanf("%d",&a[i]);
    
    }
    for(i=1;i<=n;i++)
    {
    	H = a[i] + H;
	}
    return H;

}


 int main ()
{
	float T, N, H;
	T = function1 ();
	N = function2 ();
	H = function3 ();
    float tong, chia;
    tong = T + N + H;
    printf("\n");
    printf("tong: %f",tong);
    chia = tong/3;
    
    if (chia < T)
    printf("\nTruong nhan so tien: %.2f", T - chia);
    else
    printf("\nTruong nop so tien: %.2f", chia - T);
    
    if (chia < N)
    printf("\nNam nhan so tien: %.2f", N - chia);
    else
    printf("\nNam nop so tien: %.2f", chia - N);
    
    if (chia < H)
    printf("\nHieu nhan so tien: %.2f", H - chia);
    else
    printf("\nHieu nop so tien: %.2f", chia - H);
    
    
	return 0;
	
}

