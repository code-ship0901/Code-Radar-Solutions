#include <stdio.h>
#include <limits.h>
int main(){
    int l;
    scanf("%d",&l);
    int arr[l];
    if (l==1){
        printf("-1");
        return 0;
    }
    for (int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    int m1=INT_MIN;
    for (int i=0;i<l;i++){
        if (arr[i]>m1){
            m1=arr[i];
        }
    }
    int m2=INT_MIN;
    for (int i=0;i<l;i++){
        if (arr[i]>m2 && arr[i]<m1){
            m2=arr[i];
        }
    }
    if (m2==INT_MIN){
        printf("-1");
    }
    else{
    printf("%d",m2);
    }
}