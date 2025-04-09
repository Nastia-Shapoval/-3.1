#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a lowercase English letter: ");
    scanf_s(" %c", &ch);  

    if (ch >= 'a' && ch <= 'z') {
        char upper = toupper(ch);
        printf("Uppercase letter: %c\n", upper);
    }
    else {
        printf("This is not a lowercase English letter\n");
    }

    return 0;
}
