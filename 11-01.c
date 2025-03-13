#include <stdio.h>//p.489-1
void get_frac(double f,int *pi,double *pd){
	*pi=f;
	*pd=f-*pi;
}
int main(void){
	double sosu,x;
	int jungsu;
	printf("실수를 입력하시오: ");
	scanf("%lf",&x);
	get_frac(x,&jungsu,&sosu);
	printf("get_frac(%lf)이 호출되었습니다.\n",x);
	printf("정수부는 %d입니다.\n",jungsu);
	printf("소수부는 %lf입니다.\n",sosu);
	
}