#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(abs(a[j])>abs(a[j+1])){
                abs(a[j+1])^=abs(a[j]);
                abs(a[j])^=abs(a[j+1]);
                abs(a[j+1])^=abs(a[j]);
            }
        }
    }
    printf("%d",(abs(a[n-1]))*abs((a[n-2])));
}