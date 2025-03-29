int bubbleSort(int arr[100],int n){
    for (int i=0;i<n;i++){
        int min=arr[i];
        for(int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                arr[j]^arr[j+1];
                arr[j+1]^arr[j];
                arr[j]^arr[j+1];
            }
        }
    }
}
int printArray(int arr[100],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}