#include <stdio.h>//p.491-11
void array_add(int *A,int *B,int *C,int size);
int main(void){
	int size;
	printf("크기를 입력하시오: ");
	scanf("%d",&size);
	int a[size],b[size],c[size];
	printf("A[]=");
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("B[]=");
	for(int i=0;i<size;i++){
		scanf("%d",&b[i]);
	}
	array_add(a,b,c,size);
	printf("C[]=");
	for(int i=0;i<size;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
}
void array_add(int *A,int *B,int *C,int size){
	for(int i=0;i<size;i++){
		C[i]=A[i]+B[i];
	}
}