#include <stdio.h>//p.490-6
void array_print(int *A,int size){
	int i;
	printf("A[] = { ");
	for(i=0;i<size;i++){
		printf("%d, ",A[i]);
	}
	printf("}\n");
}
int main(void){
	int a[10]={1,2,3,4,5,0,0,0,0,0};
	array_print(a,sizeof(a)/sizeof(a[0]));
}