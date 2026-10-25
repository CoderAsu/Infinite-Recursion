#include <stdio.h>

struct Address{
    char *city;
    char *state;
    char *country;
};

struct Date {
    int day;
    int month;
    struct Address ad;
};

typedef struct Student{
    int roll;
    struct Date dt;
} S;


int main(){

    S s1;
    S *ptr;

    ptr = &s1;

    ptr -> dt.ad.country = "India";

    printf("%s\n", ptr -> dt.ad.country);

    return 0;
}