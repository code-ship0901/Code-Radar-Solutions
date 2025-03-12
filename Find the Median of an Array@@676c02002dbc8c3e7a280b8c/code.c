#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
    int a[l];
    for (int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    if (l%2!=0){
        printf("%d",a[(l/2)+1]);
    }
    else if(l%2==0){
        printf("%d",(a[(l/2)+1]+a[(l/2)+2])/2);
    }
}