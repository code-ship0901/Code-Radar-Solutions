#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int f1,f2;
    int min=INT_MAX;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(min>abs(a[i]-a[j])){
                min=abs(a[i]-a[j]);
                f1=a[i];
                f2=a[j];
            }
        }
    }
    printf("%d %d",f1,f2);
}