#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("read message: %s\n", msg);
}

int main()
{
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);

    return 0;
}
