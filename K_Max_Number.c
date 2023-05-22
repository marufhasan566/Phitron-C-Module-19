#include <stdio.h>
#include <limits.h>
int func(long long int *arr, int n, int i, long long int max)
{
    // Base Case
    if (i == n)
        return max;
    if (arr[i] > max)
    {
        max = arr[i];
    }
    func(arr, n, i + 1, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int max = INT_MIN;
    long long int result = func(arr, n, 0, max);
    printf("%lld", result);

    return 0;
}