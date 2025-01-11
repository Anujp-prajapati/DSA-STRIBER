#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initializadton of the vectors
    vector<int> num;
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        num.push_back(value);
    }
    cout << "The value at index is" << endl;
    cout << num[2] << endl;
}