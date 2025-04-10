#include <stdio.h>//490-08
double* get_max(double* A, int size);
int main(void){
	double *max;
	int size;
	printf("A배열의 길이: ");
	scanf("%d",&size);
	double A[size];
	printf("A[] = ");
	for(int i=0;i<size;i++){
		scanf("%lf",&A[i]);
	}
	max=get_max(A,size);
	printf("최대값은 %.2f입니다.\n",*max);
}
double* get_max(double* A, int size){
	double* max=&A[0];
	for(int i=1;i<size;i++){
		if(*max<A[i]){
			max=&A[i];
		}
	}
	return max;
}