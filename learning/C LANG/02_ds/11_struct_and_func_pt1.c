/*
    Topics to be covered
    1. Passing structure memeber as argument
    2. Passing structure variable as argument
    3. Passing pointers to structures as arguments.
    4. Returning a structure variable from the function.
    5. Returning a pointer to a structure from the function.
    6. Passing array of structures as argument.
    7. Selef referential structures.
*/


/*
    Structure members as argument

    Just like variables, we can pass structure memebers as arguments to a function.


*/


#include <stdio.h>

struct student {
    char name[50];
    int age;
    int roll_no;
    float marks;
};

void print(char name[], int age, int roll, float marks){
    printf("%s %d %d %.2f", name, age, roll, marks);
}

int main(){
    struct student s1 = {"Nick", 16, 50, 72.5};
        
    print(s1.name, s1.age, s1.roll_no, s1.marks);

    return 0;
}


/* 
    Call by reference

    Instead of passing the copies of the structure members, we can pass their addresses (or references).

    struct charset{
        char s;
        int i;
    };

    void keyValue(char *s, int* i){
        scanf("%c %d", s, i);
    }

    int main(){
        struct charset cs;
        keyValue(&cs.s, &cs.i);
        printf("%c %d", cs.s, cs.i);
        return 0;
    }

*/