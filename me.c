#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("whats's your name ? ");
    printf("hello , %s .", name);
}
