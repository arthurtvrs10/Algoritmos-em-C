#include <stdio.h>
int main(void){
	int i;
	
	for(i=0; i<=100; i++){
		if(i % 2 == 0){
			printf("%i\n", i);
		}
	}
	return 0;
}
