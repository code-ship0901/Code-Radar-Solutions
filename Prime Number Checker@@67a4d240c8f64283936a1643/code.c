int isPrime(int n){
    int c=0;
    if ( n==2){
        return 1;
    }
    for (int i=2;i<n;i++){
         if (n%i==0){
            c++;
         }
    }
    if (c>0){
      return 0;
    }
    else{
     return 1;
    }
}