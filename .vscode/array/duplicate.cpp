// write a program to remove duplicate elements in an array
// input: array = [1, 2, 2, 3, 4,
// output: array = [1, 2, 3, 4]


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//vector<int> v;
void fun(int arr[],int n)
{
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]=1;
    }
    
    for(int i=0;i<n+1;i++)
    {
        if(hash[i]==1)
        {
            //v.push_back(i);
        }

    }
}


int fun1(int arr[],int n)
{
    int index=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            index++;
            arr[index]=arr[i+1];
        }
    }
    return index;
}





int main(){
    int array[8]={1,2,2,3,3,4,4,5};
    //set<int>st;
    // for(int i=0;i<8;i++)
    // {
    //     st.insert(array[i]);
    // }
    // for(auto it:st)
    // {
    //     cout<<it<<" ";
    // }

    // fun(array,8);

    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }


    int index=fun1(array,8);
    for(int i=0;i<=index;i++)
    {
        cout<<array[i]<<" ";

    }

 


    
}