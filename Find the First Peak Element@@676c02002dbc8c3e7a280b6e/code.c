#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100]; 
    for (int i=1;i<n-1;i++){
        scanf("%d\n",&a[i]);
    }

    int max=-1;
    if (a[0]>a[1]){
        printf("%d",a[0]);
        return 0;
    }
    for (int i=1;i<n-1;i++){
        if((a[i]>a[i+1]) && (a[i]>a[i-1])){
            max=a[i];
            break;
        }
    }
    printf("%d",max);
    return 0;
}