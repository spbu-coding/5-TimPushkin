#include <stdlib.h>
#include <stdio.h>

void other() {
    printf("Secret code reached!\n");
    exit(0);
}

void input() {
    char buf[5];
    scanf("%s", buf);
}

int main() {
    printf("Address of other: %p\n", other);
    input();
    printf("Exiting normally...\n");
    return 0;
}
