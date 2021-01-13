#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//void InsertWord(char* first, char* second);
//int main()
//{
//	char* firstString;
//	char* secondString;
//	int n, m;
//
//	printf("Enter a size of the First String: \n");
//	scanf_s("%d", &n);
//	printf("Enter a size of the Second String: \n");
//	scanf_s("%d", &m);
//
//	rewind(stdin);
//	printf("Enter the First String: \n");
//	firstString = (char*)calloc(n + 1, sizeof(char));
//	fgets(firstString, n + 1, stdin);
//	rewind(stdin);
//	printf("Enter the Second String: \n");
//	secondString = (char*)calloc(m + 1, sizeof(char));
//	fgets(secondString, m + 1, stdin);
//	rewind(stdin);
//
//	puts(firstString);
//	//printf("\n");
//	puts(secondString);
//
//	InsertWord(firstString, secondString);
//
//	free(firstString);
//	free(secondString);
//	return 0;
//}
//
//void InsertWord(char* first, char* second)
//{
//	int k;
//	int i = 0;
//	int j = 0;
//	int firstStringLength = 0, secondStringLength = 0;
//	while (first[i] != '\0' && first[i] != '\n')
//	{
//		i++;
//		firstStringLength++;
//	}
//	while (second[j] != '\0' && second[j] != '\n')
//	{
//		j++;
//		secondStringLength++;
//	}
//
//	printf("Enter a number: \n");
//	scanf_s("%d", &k);
//
//	if (firstStringLength > secondStringLength)
//	{
//		first = (char*)realloc( first, firstStringLength + secondStringLength + 2);
//		for (i = firstStringLength + 1; i > k; i--)
//		{
//			first[i + secondStringLength] = first[i];
//		}
//		j = 0;
//		for (i = k; i < k + secondStringLength; i++)
//		{
//			first[i] = second[j];
//			j++;
//		}
//
//		first[firstStringLength + secondStringLength + 1] = '\0';
//		puts(first);
//	}
//	else
//	{
//		second = (char*)realloc(second, firstStringLength + secondStringLength + 2);
//		for (i = secondStringLength + 1; i > k; i--)
//		{
//			second[i + firstStringLength] = second[i];
//		}
//		j = 0;
//		for (i = k; i < k + firstStringLength; i++)
//		{
//			second[i] = first[j];
//			j++;
//		}
//		second[firstStringLength + secondStringLength + 1] = '\0';
//		puts(second);
//	}
//}
