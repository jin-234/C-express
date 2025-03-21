#include <stdio.h>//p.490-5
int main(void){
	char a[1000];
	char *p;
	p=&a[0];
	a[0]='a';
	a[1]=100;
	*((float*)(a+2)) = 3.14;//풀이 포기. 인터넷 검색함
	printf("%c %d %.2f",a[0],a[1],*((float*)(a+2)));
}