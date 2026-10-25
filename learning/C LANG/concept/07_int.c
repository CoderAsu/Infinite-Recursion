/* 
we know that 1 byte = 8 bits
then, 2 bytes = 16 bits
and 4 bytes = 32 bits

sizeof(int) -> 4 bytes
Note: sizeof is a unary operator and not a function
*/




/*
Calculating ranges of the given bits
for unsigned range = 2^n - 1
for signed range = -(2^(n-1)) to +(2^(n-1)-1)
where n = number of bits


for 2 bytes,
unsigned range = 0 to 65,535
signed range = -32,768 to 32,767
*/



/*
    If u < 2^(n-1), then signed value = u
    If u >= 2^(n-1), then signed value = u - 2^n
*/



/*
modifiers (short, long, signed, unsigned) used for integer

Note: by default int some_variable_name; is signed integer variable

Unsigned int some_variable_name; allows only positive values
*/


#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
    printf("%d\n",sizeof(short int));

    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("range of signed integer is from: %d to %d\n", var1, var2);



    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    printf("range of unsigned integer is from: %u to %u\n", var3, var4);



    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;

    printf("range of short signed integer is from %d to %d\n", var5, var6);



    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX;

    printf("range of short unsigned integer is from %u to %u\n", var7, var8);



    long int var9 = LONG_MIN;
    long int var10 = LONG_MAX;

    printf("range of long signed integer is from %ld to %ld\n", var9, var10);    



    long unsigned int var11 = 0;
    long unsigned int var12 = ULONG_MAX;

    printf("range of long unsigned integer is from %lu to %lu\n", var11, var12); 


    
    // Size of all the types in int
    printf("%d\n", sizeof(var1));
    printf("%d\n", sizeof(var2));
    printf("%d\n", sizeof(var5));
    printf("%d\n", sizeof(var7));
    printf("%d\n", sizeof(var9));
    printf("%d\n", sizeof(var11));

    


    return 0;
}

/*
    -> Size of integer = 4 bytes
    -> Size of short = 2 bytes
    -> Size of long = 4 bytes in windows / 8 bytes in linux
    -> sizeof(short) <= sizeof(int) <= sizeof(long)
    -> writing signed int some_variable_name; is equivalent to writing int some_variable_name
    -> %d is used to print "signed integer"
    -> %u is used to print "unsigned integer"
    -> %ld is used to print "long integer" equivalent to "signed long integer"
    -> %lu is used to print "unsigned long integer"
    -> %lld is used to print "long long integer"
    -> %llu is used to print "unsigned long long integer"
*/