// write a program to rotate an array by kth postion
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // initialize variables
    
    int n;
    int k;
   
    cout << "enter the number of position to rotate the array";
    cin >> k;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    // input parameters
    cout << "enter elements in an array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     vector<int>v;
    // for(int i=k;i<n;i++)
    // {
    //     v.push_back(arr[i]);
    // }
    // for(int i=0;i<k;i++)
    // {
    //     v.push_back(arr[i]);
    // }

    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }


    for(int i=0;i<n;i++)
    {
        v.push_back(arr[(i+k)%n]);
    }

    for(auto it:v)
    {
        cout<<it<<" ";
    }

    
}