#include <stdio.h>

int main(){
	double price , diameter , high ; scanf("%lf%lf%lf" , &price , &diameter , &high) ;
	printf("Volume : %.2lfml\nBaht/ml : %.4lf" , high * 3.14159265359 * diameter/2 * diameter/2 , price/(high * 3.14159265359 * diameter/2 * diameter/2) ) ;
	return 0;
}
