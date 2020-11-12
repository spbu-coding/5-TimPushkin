#include <stdio.h>

void other() {
    printf("Secret code reached!\n");
    fflush(stdout);
}

void input() {
    char buf[5];
    scanf("%s", buf);
    printf("You entered: %s\n", buf);
    fflush(stdout);
}

int main() {
    printf("Address of main: %p\n", &main);
    printf("Address of other: %p\n", &other);
    input();
    printf("Exiting normally...\n");
    return 0;
}
