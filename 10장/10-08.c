#include <stdio.h>
int main(void){
	int m,cunt=0;
	int x[10][2]={{1,1},
				  {2,8},
				  {3,27},
				  {4,64},
				  {5,125},
				  {6,216},
				  {7,343},
				  {8,512},
				  {9,729},
				  {10,1000}};
	printf("정수를 입력하시오: ");
	scanf("%d",&m);
	for(int i=0;i<10;i++){
		if(m==x[i][1]){
			printf("%d의 세제곱근은 %d\n",m,x[i][0]);
			cunt++;
		}
		if(cunt>0)
			break;
	}
	if(cunt==0)
		printf("세제곱근이 없습니다.\n");
}
