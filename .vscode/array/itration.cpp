#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "enter an array of integers";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "the output of an array is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}