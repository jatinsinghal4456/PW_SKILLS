#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int m = 6;
    // Q1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;

    // Q2
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    // Q3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Q4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << j << " ";
            }
            else
            {
                cout << (char)(64 + j) << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    // Q5
    int nst = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            nst++;
        }
        else
            nst--;
        cout << endl;
    }
    cout << endl;

    // Q6
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1 || i == n) || (j == 1 || j == n))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    // Q7

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Q8
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    // Q9
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(64 + j);
        }
        cout << endl;
    }
    cout << endl;
    // Q10
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    // Q11
    int nst1 = 1;
    int nsp1 = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        for (int j = 1; j <= nsp1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= nst1; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            nst1++;
            nsp1--;
        }
        else
        {
            nst1--;
            nsp1++;
        }
    }
    cout << endl;
    return 0;
}