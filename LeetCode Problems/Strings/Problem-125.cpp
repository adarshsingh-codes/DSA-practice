#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    string words="";
    for(int i=0;str[i]!=0;i++){
        str[i]=tolower(str[i]);
        if(!isalnum(str[i])){
            continue;
        }else{
            words+=str[i];
        }
    }
    int i=0;
    int j=words.length()-1;
    while(j>i){
        if(words[i]!=words[j]){
            return false;
        }
        j--;
        i++;
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    if(isPalindrome(str)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}