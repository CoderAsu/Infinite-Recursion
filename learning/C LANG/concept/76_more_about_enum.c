#include <stdio.h>

// typedef with enum

typedef enum {Mon, Tue, Wed, Thu, Fri, Sat, Sun} Day;

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main(){
    Day today = Wed;
    if(today == Wed){
        printf("It is Wednesday!\n");
    }

    Day tomorrow = Thu;
    printf("%d\n", Thu);





    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
        printf("Low Level");
        break;
        case 2:
        printf("Medium level");
        break;
        case 3:
        printf("High level");
        break;
    }

    return 0;
}