#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int a[6]={0},count=0;
	srand((unsigned)time(NULL));
	printf("로또 번호는 다음과 같습니다.\n");
	
	while(1){
		count=0;
		for(int i=0;i<6;i++){
			a[i]=(1+(rand()%45));
		}
		for(int i=0;i<6;i++){
			for(int j=0;j<i;j++){
				if(a[i]==a[j])
					count=count+1;
			}
		}
		if(count==0)
			break;
	}
	for(int i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}