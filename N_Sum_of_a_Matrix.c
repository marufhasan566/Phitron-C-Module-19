#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int arr2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr2[i][j] = 0;
        }
    }

    for (int n = 0; n < 2; n++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &arr[i][j]);
                arr2[i][j] = arr2[i][j] + arr[i][j];
            }
        }
    }
    // printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}