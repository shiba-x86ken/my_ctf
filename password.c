#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char enter_buf[16];
    char password_buf[16] = "bkmyQef]Rtde9!!";
    char flag_buf[] = "8\"w6%2w!2%.w$:6%#y";
    long int key = 1564897521365489751;

    printf("Please enter the correct password and get the flag.\n");

    printf("PASS:");
    scanf("%16s", enter_buf);

    if (strcmp(password_buf, enter_buf) == 0) {
        for(int i = 0; i < strlen(flag_buf); i++) {
            flag_buf[i] ^= key;
        }
        printf("\nKITCTF{%s}", flag_buf);
    } else {
        printf("\nIncorrect.\nPlease retry.");
    }

    return 0;
}
