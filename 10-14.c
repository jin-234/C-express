#include <stdio.h>//p.449-14
#include <stdlib.h>
#include <time.h>
int main(void){
	int x[6][6];
	srand((unsigned)time(NULL));
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			x[i][j]=1+rand()%5;
		}
	}
	int m=0,result=0;
	for(int count_i=0;count_i<4;count_i++){
		for(int count_j=0;count_j<4;count_j++){
			for(int i=count_i;i<count_i+3;i++){
				for(int j=count_j;j<count_j+3;j++){
					m=m+x[i][j];
				}
			}
			if(result<m){
				result=m;
			}
			m=0;
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	printf("가장 매장량이 많은 구역의 매장량은 %d입니다.\n",result);
}