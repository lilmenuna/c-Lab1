#include <stdio.h>
int main(){
	int x1;
	int x2;
	scanf("%d %d",&x1,&x2);
	if (x1 > x2){
		printf("%d %d",x1,(x1-x2));
	} else {
		printf("%d %d",x2,(x2-x1));
	}
}
