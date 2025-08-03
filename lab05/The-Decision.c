
#include <stdio.h>

int main(){
	
	int start , stop ; scanf("%d%d",&start,&stop);
	if (start > stop){
		for(int i = start ; i >= stop ; i--) printf("%d ",i);
	} else {
		for(int i = start ; i <= stop ; i++) printf("%d ",i);
	}

	return 0;
}
