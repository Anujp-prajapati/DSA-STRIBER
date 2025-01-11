// write a program take input a,b,c as input and make a function (a+b) if c=1, (a-b) if c=2, (a*b) if c=3
//(a/b) if c= 4
#include <bits/stdc++.h>
using namespace std;
void num_calulate()
{
    int a, b, c;
    cout << "enter the value of a ,b,c" << endl;
    cin >> a >> b >> c;
    switch (c)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        cout << a / b << endl;
        break;

    default:
        cout << "invalid input" << endl;
    }
}
int main()
{
    num_calulate();
    return 0;
}