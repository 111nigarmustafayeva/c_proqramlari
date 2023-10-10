#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char herf,upper,lower;
	printf("herf daxil edin");
	scanf("%c",&herf);
	lower=(herf=='a',herf=='e',herf=='i',herf=='u',herf=='o');
	upper=(herf=='A',herf=='E',herf=='I',herf=='U',herf=='O');
	if(upper||lower){
		printf("herf saitdir:%c",herf);
	}
	else{
		printf("herf samitdir:%c",herf);
	}
	

	return 0;
}
