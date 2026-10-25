/*
    Structure Packing

    Because of structure padding, size of the structure becomes more than the size of the actual structure. Due to this some memory will get wasted.

    We can avoid the wastage of memory by simply writing #pragma pack(1)

    #pragma is a special purpose directive used to turn on or off certain features

    It is important for us to understand whether wastage of memory will be there or wastage of CPU cycle will be there if you want to save the memory then CPU cycles will get wasted in that case we should use packing concept, if we don't want to waste CPU cycles we are ready to waste the memory then padding concept will be applicable.
*/

#include <stdio.h>
#pragma pack(1)

struct abc{
    char a;
    int b;
    char c;
};

int main(){

    struct abc var1;

    printf("%d", sizeof(var1));
    return 0;
}
