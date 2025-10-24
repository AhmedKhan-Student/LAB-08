#include<stdio.h>
int main(){
	// right angle triangle
	int i,j;
	printf("pyramid pattern\n");
	
	for(i=1 ; i<6 ; i++){ //i = 3
		for(j=1; j<i ; j++){ // i <2
			printf("*");
		}
		printf("\n");
		// *
		//* *
		// *  * *
		//
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
