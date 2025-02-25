#include <stdio.h>//p.446-09
#include <math.h>
int main(void){
	double o=0,m=0,n,x[10];
	for(int i=0;i<10;i++){
		printf("데이터를 입력하시오:");
		scanf("%lf",&n);
		x[i]=n;
	}
	for(int i=0;i<10;i++){
		m=m+x[i];
	}
	m=m/10;
	for(int i=0;i<10;i++){
		o=o+pow((x[i]-m),2);
	}
	o=sqrt(o/10);
	printf("평균값은 %lf\n",m);
	printf("표준편차는 %lf\n",o);
}