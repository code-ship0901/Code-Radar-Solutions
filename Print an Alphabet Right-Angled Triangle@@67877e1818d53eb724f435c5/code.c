#include <stdio.h>
int main() {
    int n;
    scnaf("%d",&n);
    for(int i=1; i<n; i++){
        char ch='A';
        for(int j=1; j<i+1; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}