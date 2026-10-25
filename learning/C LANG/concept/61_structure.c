/*
    A structure is a user defined data type that can be used to group elements of different types into a single type.

    struct{
        char *engine;
        char *fuel_type;
        int fuel_tank_cap;
        int seating_cap;
        float city_mileage;
    } car1, car2;
*/

#include <stdio.h>

struct {
    char *engine;
} car1, car2;

int main(){
    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa Dual VTVT";

    printf("%s\n", car1.engine);
    printf("%s", car2.engine);
    return 0;
}

