#include <stdio.h>
void func(int digits)
{
    // Base Case
    if (digits == 0)
        return;
    int n = digits % 10;
    // printf("\n");
    func(digits / 10);
    printf("%d ", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    int digits;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &digits);
        func(digits);
        if (digits == 0)
        {

            printf("0");
        }

        printf("\n");
    }

    return 0;
}