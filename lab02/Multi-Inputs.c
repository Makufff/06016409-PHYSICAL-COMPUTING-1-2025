#include <stdio.h>

int main(){

	char txt1[31] , txt2[31] , txt3[31] , txt4[31] ;

	scanf("%s\n" , txt1) ;
	scanf("%s\n" , txt2) ;
	scanf("%s\n" , txt3) ;
	scanf("%s\n" , txt4) ;

	printf("String 1: %.3s\n" , txt1) ;
	printf("String 2: %.4s\n" , txt2) ;
	printf("String 3: %.5s\n" , txt3) ;
	printf("String 4: %.6s" , txt4) ;

	return 0 ;
}
