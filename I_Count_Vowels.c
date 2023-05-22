#include <stdio.h>
#include <string.h>
void func(char string[], int i, int sum)
{
    if (i == strlen(string))
        return;
    // printf("%c ", string[i]);
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
    {
        sum = sum + 1;
    }
    func(string, i + 1, sum);
    if (i == strlen(string) - 1)
    {
        printf("%d ", sum);
    }
}
int main()
{
    char string[201];
    fgets(string, 201, stdin);
    func(string, 0, 0);
    return 0;
}