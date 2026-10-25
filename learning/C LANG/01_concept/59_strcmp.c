// why == is not used for strings because the address of str1 is not equal to the address of str2. Instead of this use strcmp(), this checks the string contents. 

// strncmp() is used to compare limited character

#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "Hello";
    char str2[] = "Hello";

    if(str1 == str2){
        printf("Address is same\n");
    } else{
        printf("Address is not same\n");
    }


    if(strcmp(str1, str2) == 0){
        printf("All characters are equal\n"); 
    } else{
        printf("All characters are not equal\n");
    }



    char str3[] = "This is good.";
    char str4[] = "This is bad.";

    if(strncmp(str3, str4, 10) == 0){
        printf("First 10 characters are same\n");
    } else{
        printf("First 10 characters are not same\n");
    }
    
    printf("%d", strncmp(str3, str4, 10)); // why number 5 is printed

    // because the ASCII value of 'g' is 103 and 'b' is 98 so 103 - 98 = 5
    return 0;
}