#include <stdio.h>
void func(int n, long long int factorial)
{
    // Base Case
    if (n == 0)
        return;
    factorial = factorial * n;
    func(n - 1, factorial);
    if (n == 1)
    {
        printf("%lld", factorial);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n, 1);
    return 0;
}