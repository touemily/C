#include <stdio.h>

int main()
{
    char input[64]; //63 characters plus null

    printf("Instructions: ");
    fgets(input,64,stdin);
    /*first argument is input buffer,
    second is maximum characters to read minus one,
    third is standard file for input
    */
    puts("Thank you! Here are your instructions:");
    puts(input);

    return(0);
}
