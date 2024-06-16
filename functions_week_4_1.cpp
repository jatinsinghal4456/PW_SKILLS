#include <iostream>
using namespace std;
void sq_first(int n)
{
    cout << "Square of first n natural numbers are " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << " ";
    }
}
int area_of_circle(int n)
{
    return 3.14 * n * n;
}
void odd_number_between(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
// Q4
void no_of_digit(int n)
{
    int num = 0;
    int orignal = n;
    while (n > 0)
    {
        n /= 10;
        num++;
    }
    cout << "Number of digits are :" << num << endl;
    cout << "Square of number is " << orignal * orignal << endl;
}
int main()
{
    // Q1
    int n = 5;
    sq_first(n);
    cout << endl;

    //  Q2
    int radius = 3;
    cout << "Area is " << area_of_circle(radius);
    cout << endl;

    // Q3
    int a = 2;
    int b = 11;
    odd_number_between(a, b);
    cout << endl;

    // Q4
    n = 234;
    no_of_digit(n);
    cout << endl;

    // Q5
    // Minimum 1 function is present in c++program

    // Q6
    // True
    // False

    // Q7
    // Yes it can be used if the passed formal parameters are different ;
}