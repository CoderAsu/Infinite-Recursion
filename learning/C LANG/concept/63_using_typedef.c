/*
    typedef gives freedom to the user by allowing them to create their own types.

    syntax: typedef existing_data_type new_data_type
    

    Use of typedef in structures

    typedef struct car{
        char engine[50];
        char fuel_type[10];
        int fuel_tank_cap;
    } Car;

    int main(){
        Car c1;
    }

*/

// when we use typedef before creating a struct then the object name is acted as alias name

    #include <stdio.h>
    typedef int INTEGER;

    int main(){
        INTEGER var = 100;
        printf("%d", var);
        return 0;
    }