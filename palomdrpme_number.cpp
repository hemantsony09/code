#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
         int num, digit, rev = 0;
         num=x;
      
         while (num != 0){
             digit = num % 10;
            rev = (rev * 10) + digit;
             num = num / 10;
         }
    if (x == rev){
        return true;
    }
        else{
            return false;
        }
    }
};
int main(){
    int x;
    cin>>x;
    Solution obj;
    cout<<obj.isPalindrome(x);

    return 0;
}
