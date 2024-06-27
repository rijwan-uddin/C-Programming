#include <stdio.h>
#include <string.h>
main()
{
    char HEXAVALUE[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    long long decimal, tempDecimal;
    char hex[65];
    int index, rem;
    printf("Enter any integer number: ");
    scanf("%lld", &decimal);
    tempDecimal = decimal;
    index = 0;
    while(tempDecimal !=0)
    {
        rem = tempDecimal % 16;
        hex[index] = HEXAVALUE[rem];
        tempDecimal /= 16;
        index++;
    }
    hex[index] = '\0';
    strrev(hex);

    printf("Hexadecimal value = %s", hex);

}
