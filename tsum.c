#include "tsum.h"
double tsum(double a,int y)
{
    int i,j;
    double sum = 1-a;
	if(y == 1)                                 //особый случай
	{
		sum = sum ;
		printf("Sum : %lf \n",sum);
	}
	else
	{
	        double t = 1;	             //t - числитель
		for(i = 2 ; i <= y ; i++)
		{
		t = pow(-1,i)*pow(a,2.0*i-1) ;          //Рассчитать значение числителя
	        int m = 1;                          //m- знаменатель
		for(j = 2 ; j <= i ; j++)
		{
			m *= ((2*j - 2) * (2*j - 1));     //Рассчитать значение знаменателя
		}
		sum += t/m;
                }
        printf("Sum: %lf \n",sum);
        }
	return sum;
}
