#include <stdio.h>//p.450-16
#include <stdlib.h>
#include <time.h>
void mine(char y[10][10]){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printf("%c ",y[i][j]);
		}
		printf("\n");
	}
}
int main(void){
	srand((unsigned)time(NULL));
	int x[10][10],a,b;
	char y[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			x[i][j]=rand()%99;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			y[i][j]='.';
		}
	}
	while(1){
		printf("어떤 행을 여시겠어요?(행번호,열번호) ");
		scanf("%d %d",&a,&b);
		if(x[a][b]<30){
			y[a][b]='*';
			mine(y);
		}
		else{
			y[a][b]='#';
			mine(y);
			printf("지뢰입니다.\n종료합니다.\n");
			break;
		}
		
	}
}