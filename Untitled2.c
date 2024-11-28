#include <stdio.h>
int main(){
	int x1;
	printf("Type a number: \n");
	int x2;
	printf("Type a number: \n");
	scanf("%d",&x1);
	scanf("%d",&x2);
	if (x1 > x2){
		printf("%d %d",x1,(x1-x2));
	} else {
		printf("%d %d",x2,(x2-x1));
	}
}
