#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[j]>a[j+1]){
                a[j+1]^=a[j];
                a[j]^=a[j+1];
                a[j+1]^=a[j];
            }
        }
    }
    printf("%d",(a[n-1])*(a[n-2]));
}