// write a program to reverse the array and print it.
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &array)
{
    int i=0;
    //cout<<array.size()<<endl;

    int j=array.size()-1;
    while(i<j)
    {
        swap(array[i],array[j]);
        i++;
        j--;
    }
    
    // for (int i = 0; i < array.size(); i++)
    // {
       
    // }
}
    

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    reverseArray(arr);

    cout << "Reversed Array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
