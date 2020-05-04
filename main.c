//У меня вариант 48
#include<stdio.h>
#include<math.h>
#include "tsum.h"
int main() {
	printf("Calculate the sum of numbers:\n");
	double x;
	int n;
	printf("+Input x:");
	scanf("%lf",&x);
	do
	{
	printf("+Input n:");         //Если n <1, введите еще раз
	scanf("%d",&n);	
	}while(n<1);
	
        tsum(x,n);
        return 0;
}

