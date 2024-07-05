#include<bits/stdc++.h>
using namespace std;

vector <int> BinarySearch(int arr[], int n, int x)
{
    vector<int> ans;
    int start=0;
    int end=0;
    int low=0;
    int high=n-1;
   
    while(low<=high)
    {
        int mid = (low+(high-low)/2);
        if(arr[mid]==x && ( mid==0 || arr[mid-1]!=x))
        {
            start= mid;
            ans.push_back(start);
            break;
        }
        else if(arr[mid]>=x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    low=0;
    high=n-1;
    while(low<=high)
    {
        int mid = (low+(high-low)/2);
        if(arr[mid]==x && (mid==n-1 || arr[mid+1]!=x))
        {
            end=mid;
            ans.push_back(end);
            break;
        }
        else if(x>=arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,9,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=9;
    vector<int> output=BinarySearch(arr,n,x);
    if(output.size()==0)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"First Occurence: "<<output[0]<<endl;
        cout<<"Last Occurence: "<<output[1]<<endl;
    }
    return 0;
}
