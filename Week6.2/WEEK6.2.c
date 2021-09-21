#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	printf("Enter the number of people  : ");
	scanf("%d", &n);

	printf("%d times", (n * (n - 1)) / 2);
	return 0;
}