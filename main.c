#include<stdio.h>
#include<math.h>
#include "tsum.h"
int main() {
	printf("Tinh tong cua day so:\n");
	double x;
	int n;
	printf("+Nhap x:");
	scanf("%lf",&x);
	do
	{
	printf("+Nhap n:");
	scanf("%d",&n);
	}while(n<1);
        tsum(x,n);
        return 0;
}

