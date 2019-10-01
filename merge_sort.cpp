#include<bits/stdc++.h>

void merge(vector<int>& arr, int l, int m, int h)
{
    vector<int> a,b;
    for(int i=l;i<=m;i++)
        a.push_back(arr[i]);
    for(int i=m+1;i<=h;i++)
        b.push_back(arr[i]);
    int i=0, j=0, k=l;
    while(i<a.size() and j<b.size())
    {
        if(a[i]<b[j])
            arr[k++]=a[i++];
        else
            arr[k++]=b[j++];
    }
    while(i<a.size())
        arr[k++]=a[i++];
    while(j<b.size())
        arr[k++]=b[j++];
}

void merge_sort(vector<int>& arr, int l, int h)
{
    if(l<h)
    {
        int m = l+(h-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,h);
        merge(arr, l, m, h);
    }
}

void sort(vector<int>& arr)
{
    int n= arr.size();
    merge_sort(arr, 0, n-1);
}

int main()
{
    //Call sort with a vector
    return 0;
}