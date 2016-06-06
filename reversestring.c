#include <stdio.h>
#include<string.h>
int main(void) {
	int test;
	scanf("%d\n",&test);
	while(test--){
		char str[10000],cpy_str[10000];
		int i,k=0;
		scanf("%s",str);
		for(i=strlen(str)-1;i>=0;i--){
			cpy_str[k++]=str[i];
		}
		printf("%s",cpy_str);
	}
	return 0;
}
