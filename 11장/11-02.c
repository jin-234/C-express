#include <stdio.h>//p.489-2
int main(void){
	int n[3];
	for(int i=0;i<3;i++){
		int x;
		printf("정수를 입력하시오: ");
		scanf("%d",&x);
		n[i]=x;
	}
	printf("================\n주소\t값\n================\n");
	for(int i=0;i<3;i++){
		printf("%08X\t%03d\n",&n[i],n[i]);
	}
}
