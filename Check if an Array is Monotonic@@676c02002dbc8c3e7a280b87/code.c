#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if ((a[i]<=a[i+1])||(a[i]<=a[i+1])){
            c++;
        }
    }
    if (c>0){
        printf("YES");

    }
    else{
        printf("NO");
    }

}