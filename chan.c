// Author: Chan
// lab2part2.c
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int len, i, max, numinput = 0, power = 1;
    char input[80];
    
    fgets(input,80,stdin);
    len = strlen(input);
    for(i = len - 2;i >= 0; i--)
    {
        input[i] = input[i] - 48;
        if(input[i] >= 0 && input[i] <=9)
        {
            numinput = numinput + (input[i])*power;
            power = power*10;
        } // if
        else
        {
            printf("%c Not a number\n", input);
            break;
        } // else
    } // for i
    printf("%i\n", numinput);
    return 0;
}
