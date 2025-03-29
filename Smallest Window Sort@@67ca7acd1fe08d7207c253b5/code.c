int findUnsortedArray(int arr[10000],int n){
    for (int i=0;i<n;i++){
        if (arr[i]>arr[i+1]){
            return arr[i];
        }
    }
}