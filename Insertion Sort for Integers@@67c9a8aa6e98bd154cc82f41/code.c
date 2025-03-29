int insertionSort(int arr[100],int n){
    for(int i=0;i<n;i++){
        int current=i;
        int prev=i-1;
        while (prev>=0 && arr[prev]>arr[current]){
            arr[prev+1]=arr[prev];
        }
    }
}