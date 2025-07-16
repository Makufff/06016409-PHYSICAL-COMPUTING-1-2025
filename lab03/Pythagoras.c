#include "stdio.h"
#include "math.h"

int main(){
	double a , b ;
	scanf("%lf%lf" ,  &a , &b) ;
	printf("%.2f" , sqrt(pow(a , 2) + pow(b , 2))) ;
	return 0 ;
}
