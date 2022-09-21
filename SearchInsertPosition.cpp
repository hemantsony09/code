#include<iostream>
using namespace std;
void search(int n,int arr[],int target){
    for (int i = 0; i < n; i++)
    {
        if(target<=arr[i]){
            cout<<i;
            return ;
        }
        else if (target>arr[n-1])
        {
            cout<<n;
            return ;
        }
        
    }
    }
int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    search(n,arr,target);
}
