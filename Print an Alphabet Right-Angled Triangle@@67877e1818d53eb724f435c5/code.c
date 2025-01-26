#include <stdio.h>
int main() {
    int n;
    scnaf("%d",&n);
    for(int i=0;i<n;i++){
        for(char j='A'; j<i+1;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}