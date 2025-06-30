#include <stdio.h>
int main(void){
	int i = 0;

	while(i<=50){
		if(i % 2 == 0){
			printf("%i ", i);
		}
		i++;
	}	
	return 0;
}

