#include <stdio.h>//p.445-07
int main(void){
	int a[3][5]={{12,56,32,16,98},
				 {99,56,34,41,3},
				 {65,3,87,78,21}};
	int x;
	for(int i=0;i<3;i++){
		x=0;
		for(int j=0;j<5;j++){
			x=x+a[i][j];
		}
		printf("%d행의 합계: %d\n",i+1,x);
	}
	for(int j=0;j<5;j++){
		x=0;
		for(int i=0;i<3;i++){
			x=x+a[i][j];
		}
		printf("%d열의 합계: %d\n",j+1,x);
	}
	return 0;
}
