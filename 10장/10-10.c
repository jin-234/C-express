#include <stdio.h>//p.447-10
#include <stdlib.h>
#include <time.h>
int main(void){
	srand((unsigned)time(NULL));
	int x[5][3];
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			x[i][j]=1+rand()%100;
		}
	}
	for(int i=0;i<3;i++){ 
		int min=100,max=0;
		for(int j=0;j<5;j++){
			if(x[j][i]>max)
				max=x[j][i];
			if(x[j][i]<min)
				min=x[j][i];
		}
		printf("시험 #%d의 최소점수: %d\n시험 #%d의 최대점수: %d\n",i,min,i,max);
	}
}
