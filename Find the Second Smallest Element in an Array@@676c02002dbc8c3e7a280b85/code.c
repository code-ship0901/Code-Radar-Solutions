#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int c=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1] || arr[j]<arr[j+1]){
                c++;
            }
            if(arr[j]>arr[j+1]){
                arr[j+1]=arr[j];
             }
        }
    }
    if (c==0){
        return -1;
    }
    else{
       return arr[1];
    }
}