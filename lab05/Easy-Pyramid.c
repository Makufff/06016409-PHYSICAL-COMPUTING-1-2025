#include <stdio.h>

int main(){
	
	int n ; scanf("%d",&n);
	n++;
	for(int i = 1 ; i < n ; i++){
		for(int space = 0 ; space < n - i - 1 ; space++) printf(" ");
		for(int star = 0 ; star < 2 * i - 1 ; star++) printf("*");
		printf("\n");
	}
	return 0;
}
