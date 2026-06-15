 int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int k=j;k<arr.size();k++){
        arr[k]=0;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }