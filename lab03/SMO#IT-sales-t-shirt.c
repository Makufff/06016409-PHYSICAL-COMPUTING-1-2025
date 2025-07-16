#include <stdio.h>

int main(){
	double price , discount , count ; scanf("%lf%lf%lf",&price,&discount,&count) ;
	printf("%.2lf" , count * (price - (price * (discount / 100)))) ;
    return 0;
}
