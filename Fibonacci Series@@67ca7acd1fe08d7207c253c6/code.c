int fibonacciSeries(int n){
    int first=0;
    int second=1;
    int arr[n];
    arr[0]=first;
     arr[1]=second;
    for(int i=2;i<n;i++){
        int sum=first+second;
        arr[i]=sum;
        first=second;
        second=sum;
    }
    for(int i=0;i<n;i++){
        return arr[i];
    }
    
}