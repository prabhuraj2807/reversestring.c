#include <stdio.h>
#include<string.h>
#define out 2
#define in 1
void count(char a[]){
	int state=out;
	int i;
	int wc=1;
	for(i=0;i<strlen(a);i++){
		if(a[i]=='\n' || a[i]==' ' || a[i]=='\t'){
			state=in;
		}
		else if(state==in){
			++wc;
			state=out;
		}
	}
	printf("Word Count : %d\n",wc);
}
int main(void) {
	int test;
	scanf("%d\n",&test);
	while(test--){
		char a[10000];
		gets(a);
		count(a);
	}
	return 0;
}
