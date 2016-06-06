#include <stdio.h>

int main(void) {
	long long int fact,product=1;
	scanf("%lld",&fact);
	int i;
	for(i=1;i<=fact;i++){
		product*=i;
	}
	printf("%lld",product);
	return 0;
}
