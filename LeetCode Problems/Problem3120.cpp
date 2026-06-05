#include<bits/stdc++.h>
using namespace std;
int numberOfSpecialChars(string word){
    int z=word.length();
    int freq[26]={0};
    int freq2[26]={0};
    for(int i=0;i<z;i++){
        if(isupper(word[i])){
            freq[word[i]-'A']++;
        }
        else if(islower(word[i])){
            freq2[word[i]-'a']++;
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
        if((freq[i]>=1&&freq2[i]>=1)){
            count++;
        }
    }
    // for(int i=0;i<26;i++){
    //     cout<<freq[i];
    // }
    // for(int i=0;i<26;i++){
    //     cout<<freq2[i];
    // }
    //cout<<"count: "<<count<<endl;
    return count;
}
int main(){
    string str;
    getline(cin,str);
    cout<<numberOfSpecialChars(str);
    return 0;
}