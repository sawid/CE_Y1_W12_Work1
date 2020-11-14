#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char reverse(char);

int main() {
	char str[201];
	int i = 0;
	scanf("%[^\n]", str);
	while (str[i] != '\0')
	{
		printf("%c", reverse(str[i]));
		i++;
	}

	return 0;
}

char reverse(char str) {
	if (str >= 'A' && str <= 'Z')
	{
		str += 32;
	}
	else if (str >= 'a' && str <= 'z')
	{
		str -= 32;
	}
	return str;
}