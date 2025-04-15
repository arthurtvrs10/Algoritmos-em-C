#include <stdio.h>
int main(void){
	int num, i=0;
	printf("Digite:\n");
	
	do{
		scanf("%i", &num);
		if(num<0){
			break;
		}
		i++;
	}while(1);
	return 0;
}
