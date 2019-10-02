#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[],int n)
{
    int maxx=INT_MIN,minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxx=max(arr[i],maxx);
        minn=min(arr[i],minn);
    }
    int count[maxx-minn+1]={0};
    for(int i=0;i<n;i++)
        count[arr[i]-minn]++;
    int output[n];
    for(int i=1;i<=maxx-minn;i++)
        count[i]+=count[i-1];

    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]-minn]-1]=arr[i];
        count[arr[i]-minn]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    count_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
