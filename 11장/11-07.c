#include <stdio.h>//p.490-7
int main(void){
	int A[10]={0,1,2,3,4,5,6,7,8,9};
	int *p;
	p=&A[9];
	printf("A[] = ");
	for(int i=9;i>=0;i--){
		printf("%d ",*(p-i));
	}
	printf("\n");
	printf("A[] = ");
	for(int i=0;i<10;i++){
		printf("%d ",*(p-i));
	}
	printf("\n");
}