#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for (int i=0;i<n;i++){
        int c=0;
        for (int j=i;j<n;j++){
            if (a[i]>a[j]){
                c++;  
            }
        }
        if (c==n-i-1){
            printf("%d ",a[i]);
        }
    }
}