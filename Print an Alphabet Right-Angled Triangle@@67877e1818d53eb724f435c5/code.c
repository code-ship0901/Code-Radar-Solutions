#include <stdio.h>
int main() {
    int n;
    scnaf("%d",&n);
    for(int i=0;i<n;i++){
        for(char j=65; j<i+66;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}