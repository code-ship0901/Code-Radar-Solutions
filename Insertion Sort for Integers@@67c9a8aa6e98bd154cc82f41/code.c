int insertionSort(int arr[100],int n){
    for(int i=1;i<n-1;i++){
        int current=i;
        int prev=i-1;
        while (prev>=0 && arr[prev]>arr[current]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=arr[current];
    }
}
int printArray(int arr[100],int n){
    for (int  i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}