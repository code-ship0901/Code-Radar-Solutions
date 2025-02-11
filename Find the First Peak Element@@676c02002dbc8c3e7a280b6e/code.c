#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100]; 
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        int max=a[i];
        if((a[i]>a[i+1])&&(a[i]>a[i-1])){
            max=a[i];
            break;
        }
    }
    printf("%d",max);
    return 0;
}