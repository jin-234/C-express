#include <stdio.h>//p.491-10
void array_copy(int *A,int *B,int size);
int main(void){
	int size;
	printf("크기를 입력하시오: ");
	scanf("%d",&size);
	int a[size],b[size];
	printf("A[]=");
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	array_copy(a,b,size);
	printf("B[]=");
	for(int i=0;i<size;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}
void array_copy(int *A,int *B,int size){
	for(int i=0;i<size;i++){
		B[i]=A[i];
	}
}