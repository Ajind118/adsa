// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter How Many Element You Want to Store";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element of"<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]< arr[min])
            {
                min=j;
            }
            
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    
   for(int i=0;i<n;i++)
    {
        cout<<"Element of"<<i+1<<" is:"<<arr[i]<<endl;
    } 
    
   
    return 0;
}