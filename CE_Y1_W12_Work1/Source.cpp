#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(char*);

int main() {
	char str[201];
	int i = 0;
	scanf("%[^\n]", str);
	while (str[i] != '\0')
	{
		reverse(&str[i]);
		printf("%c", str[i]);
		i++;
	}

	return 0;
}

void reverse(char* str) {
	if (*str >= 'A' && *str <= 'Z')
	{
		*str += 32;
	}
	else if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}