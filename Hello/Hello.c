#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main (void)
{
    string name = get_string("What's your name?\n");
    printf("Welcome %s!\n", name);
    return 0;
}