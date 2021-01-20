#include <stdio.h>
#include <stdlib.h>
int charToInt(char* string, int n);
int main()
{
    int* number;
    int n;
    int end = 0, start = 0, counter = 0, i = 0;
    char* string;
    printf("Enter a number of elements: \n");
    scanf_s("%d", &n);
    if (!(string = (char*)calloc(n + 1, sizeof(char))))
    {
        return -1;
    }

    rewind(stdin);
    printf("Enter a string: \n");
    fgets(string, n + 1, stdin);

    puts(string);

    number = charToInt(string, n);
    int j = 0;
    while (number[j])
    {
        printf("%5d", number[j]);
        j++;
    }
    free(string);
    return 0;

}
int charToInt(char* string, int n)
{
    int number = 0, k = 0;
    int znak;
    int* array;
    array = (int*)malloc(n * sizeof(int));
    int i = 0;
    while (string[i] != '\0' && string[i] != '\n')
    {
        while (k < n)
        {
            if (string[i] == '-')
            {
                znak = -1;
                i++;
            }
            if (string[i] == '+')
            {
                znak = 1;
                i++;
            }
            if (string[i] == ' ')
            {
                i++;
            }
            for (number = 0; string[i] >= '0' && string[i] <= '9'; i++)
            {
                number = 10 * number + (string[i] - '0');
            }
            array[k] = number;
            k++;
        }
        array = (int*)realloc(array, k);
    }
    return array;
}
