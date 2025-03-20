#include <stdio.h>//p.448-12
#include <stdlib.h>
#include <time.h>
int main(void){
	int place[100],n;
	srand((unsigned)time(NULL));
	for(int i=0;i<100;i++){
		place[i]=1+rand()%10;
	}
	printf("상품 번호를 입력하세요: ");
	scanf("%d",&n);
	for(int i=0;i<100;i++){
		if(n==place[i]){
			printf("상품 %d번은 선반 %d에 있습니다.\n",n,i+1);
			break;
		}
	}
}
