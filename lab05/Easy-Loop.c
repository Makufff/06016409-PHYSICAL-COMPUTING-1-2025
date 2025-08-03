#include <stdio.h>

int main(){

	int n ; scanf("%d",&n);
	if (n >= 0) while(n) printf("%d ",n--);
	else while(n) printf("%d ",n++);
	printf("%d" , 0);
	return 0;
	}
