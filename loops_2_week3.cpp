#include <iostream>
using namespace std;
int main()
{

    // Q1
    // Infinite loop

    // Q2
    // Hello
    // Hello
    // Hello
    // Hello

    // Q3
    // In for loop
    // In for loop
    // In for loop

    // Q4
    // 9 1 ;
    // 8 2 ;
    // 7 3 ;
    // 6 4 ;
    // 5 5 ;
    // 4 6 ;

    // Q5
    int num1 = 4556;
    int sum = 0;
    while (num1 > 0)
    {
        int digit = num1 % 10;
        sum += digit;
        num1 /= 10;
    }
    cout << "Sum of all digits is : " << sum;

    // Q6
    int num2 = 12;
    int sum2 = 0;
    while (num2 > 0)
    {
        int digit = num2 % 10;
        sum += 2 * digit;
        num2 /= 10;
    }
    cout << "Output is " << sum2;

    // Q7
    int num3 = 10;
    int fact = 1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= i;
        }
        cout << fact;
    }

    // Q8
    int num4 = 10;
    int a = 1;
    int b = 1;
    for (int i = 1; i <= num4; i++)
    {
        cout << a << endl;
        int sum = a + b;
        a = b;
        b = sum;
    }

    // Q9
    for (int i = 0; i <= 5000; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    cout << endl;
}