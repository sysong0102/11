#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i = 4; // 300으로 바꾸면 결과가 300, 300, 4로 다르게 나옴 
		
	int* pi = &i;
	char* pc = &i;
	
	
	printf("%i, %i, %i\n", i, *pi, *pc);

}
