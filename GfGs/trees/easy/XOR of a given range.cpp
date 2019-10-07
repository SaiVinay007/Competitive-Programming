int gtXor(int arr[], int n,int a,int b)
{
//add code here.

    int ans=0;
    
    for(int i=a;i<=b;i++)
    {
        ans^=arr[i];
    }
    return ans;
}