#include <stdio.h>
typedef long long ll;
ll naturalSum(ll n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + naturalSum(n - 1);
}
int main()
{
    ll n;
    scanf("%lld", &n);
    ll sum = naturalSum(n);
    printf("Sum is %lld\n", sum);
    return 0;
}