#include <iostream >
#include <algorithm>
#include <string>
using namespace std;
void print(string s)
{
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        cout << s[i];
    }
    cout << endl;
}
//

void count(string s)
{
    int l = s.length();
    int c = 0;

    for (int i = 0; i < l; i++)
    {
        char ch = tolower(s[i]);
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            c++;
        }
    }

    cout << "Number of consonants are: " << c << endl;
}
//

void palindrome(string s)
{
    int l = s.length();
    bool flag = true;
    int a = 0;
    int b = l - 1;
    while (a < b)
    {
        if (s[a] == s[b])
        {
            a++;
            b--;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "It's a Palindrome ";
    else
        cout << "Not a Palindrome ";
    cout << endl;
}
//

void reversehalf(string s)
{
    int l = s.length();
    if (l % 2 == 0)
    {
        reverse((s.begin() + l / 2), s.end());
        cout << "Reversed string is " << s;
    }
    else
    {
        cout << "Not even length ";
    }
    cout << endl;
}
//

int convert_to_int(string s)
{
    int l = s.length();
    int num = 0;
    for (int i = 0; i < l; i++)
    {
        num *= 10;
        num += s[i] - '0';
    }
    return num;
}
//

int main()
{
    string ss;
    cout << "Enter the String : ";
    cin >> ss;
    string s = ss;
    int n = s.length();
    // Q1
    for (int i = 1; i < n; i += 2)
    {
        s[i] = '#';
    }
    print(s);

    // Q2
    count(s);

    // Q3
    palindrome(s);

    // Q4
    s = "JatinSinghal";
    reversehalf(s);

    // Q5
    s = "1234567890";
    cout << "Final number converted to integer is  : " << convert_to_int(s);
}