#include <stdio.h>//p.489-4
void my_strlen(char *p){
	int len=0;
	while(*p!='0'){
		len++;
		p++;
	}
	printf("%d\n",len);
}
int main(void){
	char *a="HELLO0";
	my_strlen(a);
}