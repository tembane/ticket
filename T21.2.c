#include <stdio.h>
#include <stdlib.h>

void changemin(char* str, int n)
{
	int min = n, a = 0, k2, k1, k3;
	char temp;
	for (int i = 0; i < n; i++)
	{
		if ((str[i] != ' ') && (str[i] != '\0') && (str[i] != '\n'))
		{
			a++;
		}
		else
		{
			if (a <= min)
			{
				min = a;
			}
			a = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if ((str[i] != ' ') && (str[i] != '\0') && (str[i] != '\n'))
		{
			a++;
		}
		else
		{
			if (a == min)
			{
				k3 = i;
				for (int i = k3-1; i>=0 ; i--)
				{
					if (str[i] == ' ')
					{
						k2 = i;
						i = 0;
					}
					else
						if (i == 0) return;
					
				}
				for (int i = k2 - 1; i >= 0; i--)
				{
					if (str[i] == ' ')
					{
						k1 = i;
						i = 0;
					}
					else
						if (i == 0) k1=0;
				}
			}
			a = 0;
		}
	}
	printf("%d %d %d %d\n", k1, k2, k3, min);
	int p = 0;
	char* str2;
	str2= (char*)calloc(n, sizeof(char));
	for (int i = k1; i <=k2; i++)
	{
		str2[p] = str[i];
		p++;
	}
	p = 0;
	for (int i = k2; i <= k3; i++)
	{
		if (str[i] == '\0') str[i] = ' ';
		str[k1] = str[i];
		k1++;
		str[i-1] = str2[p];
		p++;
	}
	str[n-1] = '\0';
	for (int i = 0; i < n; i++)
	{
		printf("%c", str[i]);
	}
	//printf("\n");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%c", str2[i]);
	//}
}

int main()
{
	int n;
	char* str;
	scanf_s("%d", &n);
	n++;
	str = (char*)calloc(n, sizeof(char));
	rewind(stdin);
	fgets(str, n, stdin);
	changemin(str, n);
	free(str);
	return 0;
}