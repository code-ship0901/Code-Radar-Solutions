#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int c=0;
    int r=0;
    for (int i=0;i<n;i++){
        for (int j=2;j<n;j++){
            if (a[i]%j==0){
                c++;
            }
        }
        if (c==0){
            r++;
        }
    }
    printf("%d",r);


}