#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
    int arr[l];
    for (int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    int m1=arr[0];
    for (int i=0;i<l;i++){
        if (arr[i]>m1){
            m1=arr[i];
        }
    }
    int m2=arr[0];
    for (int i=0;i<l;i++){
        if (arr[i]>m2 && arr[i]!=m1){
            m2=arr[i];
        }
    }
    printf("%d",m2);
}