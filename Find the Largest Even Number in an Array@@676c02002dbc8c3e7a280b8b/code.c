#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    int largest=a[0];
    for (int i=0;i<n;i++){
        if  (a[i]%2==0){
           c++;
        }
        if (c==0){
            return -1;
        }
        if (a[i]>largest && a[i]%2==0){
            largest=a[i];   
        }
    }
    printf("%d",largest);
    return 0;
}