#include <iostream>
using namespace std;
int main()
{
    // Q1
    int a, b;
    cout << "Enter two input numbers : ";
    cin >> a, b;
    if (a > b)
        cout << a << " is greatst";
    else
        cout << b << " is greatest .";

    // Q2
    int r = 5;
    int area = 3.14 * r * r;
    int circumference = 2 * 3.14 * r;
    if (area > circumference)
        cout << "Area is greater than circumference";
    else
        cout << "Circumference is greater than area";

    // Q3
    int year;
    cout << "Enter the year to be checked";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "It is a leap year";
            }
            else
                cout << "Not a leap Year";
        }
        else
            cout << "Not a leap Year";
    }
    else
        cout << "Not a leap Year";

    // Q4
    int length = 5;
    int breadth = 3;
    cout << "Area of rectangle is : " << length * breadth;

    // Q5
    int s1, s2, s3;
    cout << "Enter the side of Triangle : ";
    cin >> s1 >> s2 >> s3;
    if (s1 == s2 == s3)
    {
        cout << "Equiletral Triangle ";
    }
    else if ((s1 == s2) || (s2 == s3) || (s1 == s3))
    {
        cout << "Isoscelens triangle ";
    }
    else
        cout << "Scalene Triangle ";
    // Q6
    int sa, sb, sc;
    cout << "Enter the marks : ";
    cin >> sa >> sb >> sc;
    if (sa < sb && sc < sa)
    {
        cout << "Least marks are : " << sc;
    }
    else if (sa < sc && sa > sb)
    {
        cout << "Least marks are : " << sb;
    }
    else
        cout << "Least marks are : " << sa;

    // Q7
    int xa, ya;
    cout << "Enter the coordinates x and y : ";
    cin >> xa >> ya;
    if (xa == 0 && ya == 0)
    {
        cout << "Lies at Origin";
    }
    else if (xa == 0)
    {
        cout << "Lies on Y axis";
    }
    else if (ya == 0)
    {
        cout << "Lies on X axis";
    }
    else
        cout << "Cout Lies on coordinates ";

    // Q8
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of x1 , y1, x2,y2,x3,y3 : ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float areapts = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (areapts == 0)
    {
        cout << "Collinear";
    }
    else
        cout << "Not Collinear";

    // Q9
    char check;
    cout << "Enter the Character to be checked : ";
    cin >> check;
    int p = (int)check;
    if ((p >= 65 && p <= 90) || (p >= 97 && p <= 112))
    {
        cout << "It's an alphabet";
    }
    else if (p >= 48 && p <= 57)
    {
        cout << "It's a number";
    }
    else
        cout << "It's a Special Character";

    //  Q10
    // b=300 c = 200 ;
}