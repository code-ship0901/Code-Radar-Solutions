#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if (n < 2) {
        printf("-1");
        return 0;
    }
    int swapped;
    for (int i=0;i<n;i++){
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
    }
    }
    if (!swapped){
        break;
    }
   int first = arr[0], second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = arr[i];
            break;
        }
    }

    printf("%d", second);
    return 0;
}