#include <stdio.h>

int main(){

	char f_name[31] , l_name[31] , id[9] ; 
	int dd , mm , yyyy ;
	float gpa ;

	scanf("%s\n" , f_name) ;
	scanf("%s\n" , l_name) ;
	scanf("%s" , id) ;
	scanf("%d/%d/%d" , &dd , &mm , &yyyy) ;
	scanf("%f" , &gpa) ;

	printf("Fullname: %s %s\n" , f_name , l_name) ;
	printf("ID: %s\n" , id) ;
	printf("DOB: %02d-%02d-%04d\n" , dd , mm , yyyy) ;
	printf("GPA: %.2f" , gpa) ;
	return 0;
}
