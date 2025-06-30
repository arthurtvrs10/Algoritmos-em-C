#include <stdio.h>
#include <locale.h>
int main(void){
	float n1, n2, n3, media, maior_med = -1;
	int i = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(i<=2){
		printf("\nDigite a primeira nota: ");
		scanf("%f", &n1);
		printf("\nDigite a primeira nota: ");
		scanf("%f", &n2);
		printf("\nDigite a primeira nota: ");
		scanf("%f", &n3);
		media = (n1+n2+n3)/3;
		printf("A media das notas e: %.2f\n", media);
		printf("\n__________________\n");
		if(media > maior_med)
		{
		maior_med = media;
		}
		i++;
	}
	
	printf("\\nA maior média foi: %.2f\n", maior_med);
	
return 0;
}

