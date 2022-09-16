#include<iostream>
using namespace std;

int main(){
    int n,a,k;
    cout<<"input row in matrix\n";
    cin>>n;
    cin>>k;
    int arr[n][k];
    int arr1[n][k];
    int sum [n][k];
        cout<<"input first matrix element\n";
            for(int i = 0;i<n; i++){
           for(int j = 0; j<k; j++){
    
            cin>>arr[i][j];
           }
            }
            cout<<"input second matrix element\n";
           for(int i = 0;i<n; i++){
           for(int j = 0; j<k; j++){
            cin>>arr1[i][j];
           }
           }
         for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            sum[i][j] = arr[i][j] - arr1[i][j];
        }
        }
        cout<<"Sub of matrix \n";
         for(int i = 0;i<n; i++){
           for(int j = 0; j<k; j++){
            cout<<sum[i][j]<<" ";
           } 
           cout<<endl; 
        }
    }
