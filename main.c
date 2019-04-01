#include <stdio.h>

int main() {
	int i;
	char c;

	printf("Bitte Zahl eingeben: ");
	scanf("%i", &i);
	printf("Bitte Zeichen eingeben: ");
	scanf("%c", &c);

	printf("Eingelesene Zahl: %i\n", i);
	printf("Eingelesenes Zeichen (als Zeichen): |%c|\n", c);
	printf("Eingelesenes Zeichen (als ASCII Code): %i\n", (int) c);

	return 0;
}