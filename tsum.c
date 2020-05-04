#include "tsum.h"
double tsum(double a,int t)
{
	int i,j;
    double sum = 1-a;
	if(t == 1)
	{
		sum = sum ;
		printf("tong la : %lf \n",sum);
	}
	else
	{
	        double tu = 1;	
		for(i = 2 ; i <= t ; i++)
		{
		tu = pow(-1,i)*pow(a,2.0*i-1) ;
	    int mau = 1;
		for(j = 2 ; j <= i ; j++)
		{
			mau *= ((2*j - 2) * (2*j - 1));
		}
		sum += tu/mau;
                }
        printf("tong la: %lf \n",sum);
        }
	return sum;
}
