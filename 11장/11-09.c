#include <stdio.h>//p.491-09
void convert(double *grades, double *scores,int size);
int main(void){
	int size;
	printf("학생 수를 입력하시오: ");
	scanf("%d",&size);
	double grades[size],scores[size];
	for(int i=0;i<size;i++){
		scanf("%lf",&grades[i]);
	}
	convert(grades,scores,size);
	for(int i=0;i<size;i++){
		printf("%.2f ",scores[i]);
	}
}
void convert(double *grades, double *scores,int size){
	for(int i=0;i<size;i++){
		scores[i]=1000*grades[i]/43;
	}
}