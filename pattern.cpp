
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = -(n - 1); i <= n - 1; i++) {
        for ( int j = -(n-1); j <= n-1; j++) {
            if(abs(i) >= abs(j)){
                cout<<abs(i)+1<<" ";
            }
            if(abs(j) > abs(i)){
                cout<<abs(j)+1<<" ";
            }
        }
        cout<<endl;
    }
}



/*
4 4 4 4 4 4 4

4 3 3 3 3 3 4

4 3 2 2 2 3 4

4 3 2 1 2 3 4

4 3 2 2 2 3 4

4 3 3 3 3 3 4

4 4 4 4 4 4 4
*/
