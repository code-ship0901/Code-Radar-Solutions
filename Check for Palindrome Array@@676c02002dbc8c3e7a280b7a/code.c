#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++){
        if (a[i]!=a[n-i-1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}