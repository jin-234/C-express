#include <stdio.h>//p.489-3
#include <stdlib.h>
#include <time.h>

void array_fill(int A[], int size){
	int i;
	for(i=0;i<size;i++){
		A[i]=rand();
	}
}
	
int main(void){
	srand((unsigned)time(NULL));
	int a[10];
	array_fill(a,10);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
