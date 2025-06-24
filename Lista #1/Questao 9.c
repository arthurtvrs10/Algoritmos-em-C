#include <stdio.h>

void main(){
	int year;
	int age;
	int year2025 = 2025;
	
	printf("when you were born? ");
	scanf("%i", &year);
	
	//for know age, using year!
	
	age = year2025 - year;
	printf("you have %i years old.\n", age);
	
	return 0;
}
