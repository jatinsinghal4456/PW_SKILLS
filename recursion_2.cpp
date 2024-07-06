#include <iostream>
using namespace std;
void sum_of_digits(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    sum += n % 10;
    sum_of_digits(n / 10, sum);
}
int sum_of_digits_m2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    n % 10 + sum_of_digits_m2(n / 10);
}

int reverse(int n, int r)
{
    if (n == 0)
    {
        cout << r << endl;
        return;
    }
    r *= 10;
    reverse(n / 10, r + (n % 10));
}
int steps_to_reduce_to_zero(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n % 2 == 0)

        return 1 + steps_to_reduce_to_zero(n / 2);

    else
        return 1 + steps_to_reduce_to_zero(n - 1);
}

int main()
{
    sum_of_digits(12345, 0);
    reverse(12345, 0);
    steps_to_reduce_to_zero(221);
}