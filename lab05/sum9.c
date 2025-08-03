#include <stdio.h>

int main(){
	int num , ans = 0;

	do {	
		scanf("%d",&num);
		ans += num ;
	}while (num != -9);
	printf("%d",ans+9);
}
