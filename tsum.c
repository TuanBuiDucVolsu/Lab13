#include "tsum.h"
double tsum(double a,int t)
{
    int i,j;
    double sum = 1-a;
	if(t == 1)
	{
		sum = sum ;
		printf("Sum : %lf \n",sum);
	}
	else
	{
	        double t = 1;	             //t - числитель
		for(i = 2 ; i <= t ; i++)
		{
		t = pow(-1,i)*pow(a,2.0*i-1) ;
	        int m = 1;                          //m- знаменатель
		for(j = 2 ; j <= i ; j++)
		{
			m *= ((2*j - 2) * (2*j - 1));
		}
		sum += t/m;
                }
        printf("SUm: %lf \n",sum);
        }
	return sum;
}
