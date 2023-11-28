#include<stdio.h>
main() {
	char  i='A';
	char j='E';
	for(i='A'; i<='E'; i++) {
		for(j='A'; j<=i; j++) 
		{
			printf(" %c",j);
		}printf("\n");
	}
}
