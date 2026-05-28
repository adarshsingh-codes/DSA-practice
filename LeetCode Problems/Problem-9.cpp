//palindrome number

#include<bits/stdc++.h>
using namespace std;

//brute/better
// bool isPalindrome(int x){
//     if(x<0){
//         return false;
//     }
//     int original=x;
//     int rev=0;
//     while(x>0){
//         int digit=x%10;
//         rev=rev*10+digit;
//         x=x/10;
//     }
//     return rev==original;
// }

//optimized
bool isPalindrome(int x){
    if(x<0|(x%10==0&&x!=0)){  //for numbers like 110,-102 
        return false;
    }
    int rev=0;
    while(x>rev){
        int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    return (x==rev||x==rev/10);
}
int main(){
    int x;
    cout<<"Enter the nunmber: ";
    cin>>x;
    if(isPalindrome(x)==true){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}