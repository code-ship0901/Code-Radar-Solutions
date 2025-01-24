#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (isdigit(a)){
    printf("Digit");
    }
    else if(isalpha(a)){
        if ((a=='a')||(a=='e')||(a=='o')||(a=='u')||(a=='i' )|| (a=='A')||( a=='E')||( a=='I')|| (a=='O')|| (a=='U')){
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