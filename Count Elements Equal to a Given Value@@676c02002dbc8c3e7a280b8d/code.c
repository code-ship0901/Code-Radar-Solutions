#include <stdio.h>
int main(){
    int l,t;
    int c=0;
    scanf("%d %d",&l,&t);
    int arr[l];
    for (int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<l;i++){
        if (arr[i]==t){
            c++;
        }
    }
    printf("%d",c);
}