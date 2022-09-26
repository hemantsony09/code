#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

    void generatepassword(char arr[],int n,int siz){
       srand(time (0));
       cout<<"generated password: ";
        for(int i =0;i<n; i++){
            cout<<arr[rand() & siz];
        }
    }
int main(){
    int n;
    char arr[]={"0123456789!@#$%^&*!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int siz = sizeof(arr);
    cout<<"enter the lenght of password: ";
    cin>>n;
    generatepassword(arr,n,siz);
    return 0;
}
