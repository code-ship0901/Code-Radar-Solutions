#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        int p=1;
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        for (int j=0;j<i;j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
    return 0;
}