#include<bits/stdc++.h>
using namespace std;
void Tower_Of_Hanoi(int n,char source,char auxilliary,char destination){
    if(n==1){
        cout<< source<<" ->"<<destination<<endl;
        return;
    }
    Tower_Of_Hanoi(n-1,source,destination,auxilliary);
    cout<<source<<"->"<<destination<<endl;
    Tower_Of_Hanoi(n-1,auxilliary,source,destination);
}
int main(){
    int n;
    cin>>n;

    Tower_Of_Hanoi(n, 'A', 'B', 'C');

    return 0;
}