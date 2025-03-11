#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
    int t;
    scanf("%d",&t);
    int a[l];
    for (int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<l;i++){
         if (t==a[i]){
            printf("%d",i);
            return 0;
         }

    }
    printf("-1");
    return 0;
} 