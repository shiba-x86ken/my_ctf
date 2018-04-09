#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char password_buf[16] = "bkmyQef]Rtde9!!";
    char enter_buf[16];
    char flag_buf[] = "You_are_very_smart.";

    printf("Please enter the correct password and get the flag.\n");

    printf("PASS:");
    scanf("%16s", enter_buf);

    if (strcmp(password_buf, enter_buf) == 0) {
        printf("\nflag is {%s}", flag_buf);
    } else {
        printf("\nIncorrect.\nPlease retry.");
    }

    return 0;
}
