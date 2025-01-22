#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if (c.isupper()){
    printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}