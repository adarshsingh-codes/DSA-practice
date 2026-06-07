//spiral matrix
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> SpiralOrder(int n){
    vector<vector<int>> arr(n, vector<int>(n));
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;
    int num=1;
    while(bottom>=top&&right>=left){
        for(int i=left;i<=right;i++){
            arr[top][i]=num++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            arr[i][right]=num++;
        }
        right--;
        if(bottom>=top){
            for(int i=right;i>=left;i--){
                arr[bottom][i]=num++;
            }
            bottom--;
        }
        if(right>=left){
            for(int i=bottom;i>=top;i--){
                arr[i][left]=num++;
            }
            left++;
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr=SpiralOrder(n);
    int r=arr.size();
    int c=arr[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}