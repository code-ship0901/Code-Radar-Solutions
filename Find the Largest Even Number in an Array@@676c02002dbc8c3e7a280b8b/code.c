#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int largest=a[0];
    for (int i=0;i<n;i++){
        if (a[i]>largest && a[i]%2==0){
            largest=a[i];   
        }
    }
    printf("%d",largest);
}