#include <math.h>
int isPrime(n){
    int c=0;
    for (int i=2;i <= sqrt(n);i++){
         if (n%i==0){
            c+=1;
         }
    }
    if (c>0){
      return 0;
    }
    else{
     return 1;
    }
}