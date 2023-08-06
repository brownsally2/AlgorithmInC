#include <stdio.h>
int main(void) {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > b) {
		printf("%s", ">");
	}if (a < b) {
		printf("%s", "<");
	}if (a == b) {
		printf("%s", "==");
	}
}