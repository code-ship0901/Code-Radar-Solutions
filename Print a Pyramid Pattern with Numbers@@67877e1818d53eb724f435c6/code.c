#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n;i++){
        int p=1;
        for (int j=0;j<n-i;j++){
            printf(" ");
        }
        for (int j=0;j<2*i+2;j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }


    return 0;
}