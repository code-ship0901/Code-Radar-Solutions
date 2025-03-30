#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    if (n==1){
        printf("-1");
        return 0;
    }
    for (int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    
    int f1 = a[0], f2 = a[1]; 
    int min=INT_MAX;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             int diff = abs(a[i] - a[j]);
            if (diff <= min) {
                min= diff;
                if (a[i] < a[j]) {
                    f1 = a[i];
                    f2 = a[j];
                } else {
                    f1 = a[j];
                    f2 = a[i];
                }
        }
    }
    }
    printf("%d %d",f1,f2);
    
}