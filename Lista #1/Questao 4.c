#include <stdio.h>

void main(){
	
	int a;
	float b;
	double c;
	
	printf("Endereco de memoria 'int': %p\n", (void*)&a);
	printf("Endereco de memoria 'float': %p\n", (void*)&b);
	printf("Endereco de memoria 'doouble': %p", (void*)&c);
	return 0;
}
