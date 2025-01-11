#include <iostream>
using namespace std;

int n;
int arr[100];

void arrr()
{
    cout << "enter the elements in an array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the elements in an array are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    cout << "enter the size of the array" << endl;
    cin >> n;

    arrr();
    return 0;
};