#include <stdio.h>//p.449-15
#include <stdlib.h>
#include <time.h>
int main(void){
	srand((unsigned)time(NULL));
	char x[10][10];
	int n=6,m=6,num=0;;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			x[i][j]='.';
		}
	}
	while(1){
		num=rand()%8;
		switch(num){
			case 0:
				n=n-1;
				break;
			case 1:
				n=n-1;
				m=m+1;
				break;
			case 2:
				m=m+1;
				break;
			case 3:
				n=n+1;
				m=m+1;
				break;
			case 4:
				n=n+1;
				break;
			case 5:
				n=n+1;
				m=m-1;
				break;
			case 6:
				m=m-1;
				break;
			case 7:
				n=n-1;
				m=m-1;
				break;
		}
		x[n][m]='#';
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				printf("%c ",x[i][j]);
			}
			printf("\n");
		}
		printf("--------------------\n");
		sleep(1);
	}
}
