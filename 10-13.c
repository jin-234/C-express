#include <stdio.h>//p.448-13
int z[3][3]={0};
void scalar_mult(int a[][3],int scalar){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			z[i][j]=a[i][j]*scalar;
		}
	}
}
void transpose(int a[][3],int b[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j]=a[j][i];
		}
	}
}
int main(void){
	int n=2,b[3][3],a[3][3]={{1,2,3},
							{4,5,6},
							{7,8,9}};
	scalar_mult(a,n);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",z[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	transpose(a,b);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}