#include <iostream>
using namespace std;

void inc_seq(int a, int n)
{
    if (n >= a)
    {
        return;
    }
    cout << a << " ";
    inc_seq(a + 1, n);
}
void dec_seq(int a, int n)
{
    if (a > n)
    {
        return;
    }
    cout << n;
    dec_seq(a, n - 1);
}
void inc_seq_m2(int a)
{
    if (a == 0)
    {
        return;
    }
    inc_seq_m2(a - 1);
    cout << a;
}
void dec_seq_m2(int a)
{
    if (a == 0)
    {
        return;
    }
    cout << a;
    dec_seq_m2(a - 1);
}
void q1_inc_dec_seq(int a, int n)
{
    if (a == n)
    {
        cout << n << " ";
        return;
    }
    cout << a << " ";
    q1_inc_dec_seq(a + 1, n);
    cout << a << " ";
}
void q1_dec_inc_seq(int a, int n)
{
    if (a == n)
    {
        cout << a << " ";
        return;
    }
    cout << n << " ";
    q1_dec_inc_seq(a, n - 1);
    cout << n << " ";
}
int sum_odd(int a, int b, int sum)
{
    if (a >= b)
    {
        return sum;
    }
    if (a % 2 != 0)
    {
        sum += a;
    }
    sum_odd(a + 1, b, sum);
}
int stair_ways(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 4;
    }
    return stair_ways(n - 1) + stair_ways(n - 2) + stair_ways(n - 3);
}
bool power_of_two(int n)
{
    if (n == 0)
        return false;
    if (n == 1)
    {
        return true;
    }
    if (n % 2 != 0)
        return false;

    power_of_two(n / 2);
}

int main()

{
    q1_inc_dec_seq(1, 5);
    sum_odd(1, 9, 0);
    power_of_two(86);
    stair_ways(59);
}