//spiral matrix
#include<bits/stdc++.h>
using namespace std;
vector<int> SpiralOrder(vector<vector<int>>& matrix){
    int r=matrix.size();
    int c=matrix[0].size();
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    vector<int> arr;
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++){
            arr.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            arr.push_back(matrix[i][right]);
        }
        right--;
        if(bottom>=top){
            for(int i=right;i>=left;i--){
                arr.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(right>=left){
            for(int i=bottom;i>=top;i--){
                arr.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return arr;
}
int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    vector<vector<int>> v(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }
    vector<int> arr=SpiralOrder(v);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}