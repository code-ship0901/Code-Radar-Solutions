int isPrime(int n){
    int c=0;
    if ( n==2){
        return 1;
    }
    else if(n==0 || n==1){
        return 0;
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