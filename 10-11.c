#include <stdio.h>//p.447-11
void vector_add(double x[],double y[],double z[]){
	for(int i=0;i<3;i++){
		z[i]=x[i]+y[i];
	}
}
double vector_dot_prod(double x[],double y[]){
	double z;
	for(int i=0;i<3;i++){
		z=z+(x[i]*y[i]);
	}
}
int main(void){
	double x[3],y[3],z[3];
	printf("x값 입력: ");
	scanf("%lf %lf %lf",&x[0],&x[1],&x[2]);
	printf("y값 입력: ");
	scanf("%lf %lf %lf",&y[0],&y[1],&y[2]);
	vector_add(x,y,z);
	printf("X+Y = [%.2f %.2f %.2f]\n",z[0],z[1],z[2]);
	printf("X*Y = %.2f\n",vector_dot_prod(x,y));
}