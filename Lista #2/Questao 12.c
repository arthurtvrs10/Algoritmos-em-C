#include <stdio.h>

int main(void){
	int a, b, c, d;
	printf("Digite 4 numeros inteiros: (2, 7, 12, 11)");
	printf("\nDigite: ");
	scanf("%i,%i,%i,%i", &a,&b,&c,&d);
	
	if(a % 2 == 0){
		printf("\nO numero %i e divisivel por 2", a);
	}
	if(a % 3 == 0){
		printf("\nO numero %i e divisivel por 3", a);
	}
	///
	if(b % 2 == 0){
		printf("\nO numero %i e divisivel por 2", b);
	}
	if(b % 3 == 0){
		printf("\nO numero %i e divisivel por 3", b);
	}
	///
	if(c % 2 == 0){
		printf("\nO numero %i e divisivel por 2", c);
	}
	if(c % 3 == 0){
		printf("\nO numero %i e divisivel por 3", c);
	}
	///
	if(d % 2 == 0){
		printf("\nO numero %i e divisivel por 2", d);
	}
	if(d % 3 == 0){
		printf("\nO numero %i e divisivel por 3", d);
	}
	return 0;
}
