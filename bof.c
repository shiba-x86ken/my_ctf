#include <stdio.h>
#include <string.h>

int main() {

    char buf_1[6] = "FAKE";
    char buf_2[10] = "\0";
    char flag_buf[] = "\\QX>wm>zwxxw}krj0";
    long int key = 84512551551487518;

    printf("Please enter \"Hello\":");
    scanf("%s", buf_2);

    if(strcmp(buf_1 , "Hello") == 0) {
        for(size_t i = 0; i < strlen(flag_buf); i++){
            flag_buf[i] ^= key;
        }
        printf("KITCTF{%s}", flag_buf);
    } else {
        puts("Did you really entered \"Hello\"?");
    }

    return 0;
}
