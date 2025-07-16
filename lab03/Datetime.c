#include <stdio.h>

int main(){
	int d , h , m , s , tmp ;
	scanf("%d" , &tmp) ;
	s = tmp ;
	d = s / 84600 ;
	s -= d * 84600 ;
	h = s / 3600 ;
	s -= h * 3600 ;
	m = s / 60 ;
	s -= m * 60 ;
	printf("%d s = %d d %d h %d m %d s", tmp , d , h , m , s ) ;
	return 0;
}
