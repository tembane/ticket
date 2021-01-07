//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>

//=========Здача №1=========\\

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int** array;
//	int n;
//	printf("Введите кол-во строк в матрице:	");
//	scanf_s("%d", &n);
//
//	if (!(array = (int**)calloc(n, sizeof(int*)))) return 1;
//		
//	for (int i = 0; i < n; i++)
//	{
//		if (!(array[i] = (int*)calloc(n, sizeof(int)))) return 1;
//	}
//	printf("\nВведите значения в матрицу\n");
//	for (int i = 0; i < n; i++)
//	{
//		for (int j=0; j<n; j++)
//		{
//			scanf_s("%d", &array[i][j]);
//		}
//	}
//	printf("\nВаша матрица\n\n");
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("\t%d", array[i][j]);
//		}
//		printf("\n");
//	}
//
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//
//	do
//	{
//		do
//		{
//			temp = array[i][j];
//		    array[i][j] = array[n - 1 - j][n - 1 - i];
//		    array[n - 1 - j][n - 1 - i] = temp;
//		    j++;
//		}while (j < n - 1 - i);
//		i++;
//		j = 0;
//	}while (i < n);
//
//	printf("\nВаша новая матрица\n\n");
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("\t%d", array[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		free(array[i]);
//	}
//	free(array);
//	return 0;
//}

//=========Здача №2=========//

//int main()
//{
//	int n, m, num = 0, l1, max = 0;
//	char** str;
//	int l = 0;
//	scanf_s("%d%d", &n, &m);
//	m++;
//	str = (char**)calloc(n, sizeof(char*));
//	rewind(stdin);
//	for (int i = 0; i < n; i++)
//	{
//		str[i] = (char*)calloc(m, sizeof(char));
//		fgets(str[i], m, stdin);
//		rewind(stdin);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//
//			if (((str[i][j]) != ' ') && ((str[i][j]) != '\0') && ((str[i][j]) != '\n'))
//			{
//				l++;
//			}
//			else
//			{
//				if (max < l)
//				{
//					max = l;
//				}
//				l = 0;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//
//			if (((str[i][j]) != ' ') && ((str[i][j]) != '\0') && ((str[i][j]) != '\n'))
//			{
//				l++;
//			}
//			else
//			{
//				if (max == l)
//				{
//					l1 = j - l;
//					num = i;
//				}
//				l = 0;
//			}
//		}
//	}
//	for (int i = l1; i < (l1 + max); i++)
//	{
//		printf("%c", str[num][i]);
//	}
//	return 0;
//}