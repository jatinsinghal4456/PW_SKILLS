#include <iostream>
using namespace std;
int main()
{ // Q1
    for (int i = 1; i < 5; i++)
    {
        for (int j = 5 - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    // Q2
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 5 - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << char(j + 64);
        }
        cout << endl;
    }
    // Q3
    cout << endl;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << char(64 + j);
        }
        for (int j = 1; j < i; j++)
        {
            cout << char(j + 65);
        }
        cout << endl;
    }
    cout << endl;
    // Q4
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << char(i + 64);
    }
    cout << endl;
    for (int i = 1; i <= 4; i++)
    {
        int num = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(num + 64);
            num++;
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " ";
            num++;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(num + 64);
            num++;
        }
        cout << endl;
    }

    // Q5
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            if (i == 0 && j == n - i)
                continue;
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    // Q6
    int m = 5;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2 * m - 1; j++)
        {
            if (i == j)
                cout << '*';
            else if (i + j == 2 * m - 2)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Q7
    m = 4;
    n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    // Q8
    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << i + 1;

        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }

        if (i > 0)
        {
            cout << i + 1;
        }

        cout << endl;
    }
    // Q9

    cout << endl;
    n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j == n + 1)
                cout << '*';
            else if (j == n || i == n)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 1; j <= n - 1; j++)
        {
            if (j == i - 1)
                cout << '*';
            else if (i == n)
                cout << '*';
            else
                cout << " ";
        }
        cout << endl;
    }
    n--;
    for (int i = 1; i <= n; i++)
    {
        cout << " ";
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << '*';
            else if (j == n)
                cout << '*';
            else
                cout << " ";
        }
        for (int j = 1; j <= n - 1; j++)
        {
            if (i + j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    // Q10
    n = 4;

    m = n - 1; // New Lines
    int str = 2 * m - 1;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= str; j++)
        {
            cout << " ";
        }
        str -= 2;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    str = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j <= m - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < str; j++)
        {
            cout << " ";
        }
        str += 2;
        for (int j = 0; j <= m - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    // Q11
    n = 4;
    for (int j = 0; j < 2 * n - 1; j++)
    {
        cout << '*';
    }
    cout << endl;
    m = n - 1; // New Lines
    str = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= str; j++)
        {
            cout << " ";
        }
        str += 2;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    str = 2 * m - 3;
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < str; j++)
        {
            cout << " ";
        }
        str -= 2;
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int j = 0; j < 2 * n - 1; j++)
    {
        cout << '*';
    }
    cout << endl;
    cout << endl;
}
