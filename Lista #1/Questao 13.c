#include <stdio.h>
void main(){
	float volume, raio;
	
	printf("Volume de esfera: ");
	printf("\nQual o raio: ");
	scanf("%f", &raio);

	volume =  (4.0 / 3.0) * 3.14159 * (raio*raio*raio);

	printf("O volume da esfera e: %f", volume);
	return 0;
}

