#include <stdio.h>

int main(){

	char fname[101] , lname[101] , p2f[101], p2l[101], p3f[101] , p3l[101] ;
	scanf("%s\n%s\n" , fname , lname) ;
	scanf("%s %s\n" , p2f , p2l) ;
	scanf("%s %s" , p3f , p3l) ;

	printf("Person 1: %s %s\n",fname , lname) ;
	printf("Person 2: %s %s\n" , p2f , p2l) ;
	printf("Person 3: %s %s" , p3f , p3l) ;

	return 0 ;
}
