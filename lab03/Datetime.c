#include <stdio.h>

int main(){
	unsigned long long  d , h , m , s , tmp ;
	scanf("%ulld" , &tmp) ;
	s = tmp ;
	d = s / 86400 ;
	s -= d * 86400 ;
	h = s / 3600 ;
	s -= h * 3600 ;
	m = s / 60 ;
	s -= m * 60 ;
	printf("%d s = %d d %d h %d m %d s", tmp , d , h , m , s ) ;
	return 0;
}
