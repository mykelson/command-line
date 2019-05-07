#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc == 3)
    {
        printf("hello, %s\n", argv[2]);
    }
    else
    {
        printf("hello world\n");
    }
}
