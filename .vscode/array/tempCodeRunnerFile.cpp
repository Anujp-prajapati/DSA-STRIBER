vector<int> v;
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
            v.push_back(i);
        }

    }
}
