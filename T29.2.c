#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void deletefirstword(char*, int);
void rek(int k);

int main()
{
	setlocale(LC_ALL, "rus");
	char* str;
	int n;
	printf("Введите кол-во символов в строке: ");
	scanf_s("%d", &n);
	n++;
	str = (char*)calloc(n, sizeof(char));
	rewind(stdin);
	fgets(str, n, stdin);
	deletefirstword(str, n);
	puts(str);
	free(str);
	return 0;
}

void deletefirstword(char* str, int n)
{
	static int i = 0;
	if (str[i] == ' ')
	{
		for (int k = 0; k < n; k++)
		{
			str[k] = str[k + 1];
		}
		return 1;
	}
	else
	{
		for (int k = 0; k < n; k++)
		{
			str[k] = str[k + 1];
		}
		deletefirstword(str, n);
	}
}