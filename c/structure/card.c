#include <stdio.h>
#include "card.h"

void output(char *str) {
    printf("Gohan:%s\n", str);
}

int main() {
    struct card Heart_Ace = {"H", "A"};
    output(Heart_Ace.mark);
    output(Heart_Ace.number);
    return 0;
}
