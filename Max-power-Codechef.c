#include <stdio.h>

int main(void) {
	long num,i;
	int c=0;
	char bin;
	scanf("%ld",&num);
	for(i=0;i<=num;i++){
	    scanf("%c",&bin);
	    c=(bin=='0')?(++c):0;
	}
	printf("%d",c);
	return 0;
}
