#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (isdigit(a)){
    printf("Digit");
    }
    else if(isalpha(a)){
        if (a=='a'||a=='e'||a=='o'||a=='u'||a=='i'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}