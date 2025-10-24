#include<stdio.h>
int main(){
	
	int i,j;
	
	for(i=1;i<=5;i++){
		printf("%d:",i);
		for(j=1;j<=5;j++){
			int c;
			printf("%4d ",c=i*j);
		}
		printf("\n");
	}
}
