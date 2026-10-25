// Switch is a great replacement to long else if constructs.

/*
    -> Only those expression are allowed in switch which results in an integral constant value.

    -> Float value is not allowed as a constant value in case label. Only integer constants/constant expressions are allowed in case label.

    -> Variable expressions are not allowed in case labels. Although macros are allowed.

    -> Default can be placed anywhere inside switch. It will still get evaluated if no match is found.
*/

#include <stdio.h>
int main(){
    int x = 23;

    switch (x)
    {
    case 3+7:
        printf("Choice 1");
        break;
    case 3+4*5: 
        printf("Choice 2");
        break;
    default: printf("default");
        break;
    }
    return 0;
}