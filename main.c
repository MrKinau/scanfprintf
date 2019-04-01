#include <stdio.h>

int main() {
	int i;
	char c;

	printf("Bitte Zahl eingeben: ");
	scanf("%i", &i);
	printf("\nBitte Zeichen eingeben: ");
	scanf("%c", &c);

	printf("\nEingelesene Zahl: %i\n", i);
	printf("Eingelesenes Zeichen (als Zeichen): |%c|\n", c);
	printf("Eingelesenes Zeichen (als ASCII Code): %i\n", (int) c);

	printf("Bitte Zahl eingeben: ");
	scanf("%i", &i);
	printf("\nBitte Zeichen eingeben: ");
	scanf(" %c", &c);
	//	   ^ Das Leerzeichen sagt scanf, dass es keine whitespace-Character einlesen soll
	//		 somit wird das ENTER nicht mehr als Zeichen akzeptiert

	printf("\nEingelesene Zahl: %i\n", i);
	printf("Eingelesenes Zeichen (als Zeichen): |%c|\n", c);
	printf("Eingelesenes Zeichen (als ASCII Code): %i\n", (int) c);

	return 0;
}