/*
    Initializing Structure variables and accessing members of structure

    not allowed
    struct abc{
        int p = 23;
        int q = 34;
    }

    wrong way of initialization

    Allowed
    struct abc {
        int p;
        int q;
    };

    int main(){
        struct abc x = {23, 34};
    }


    Two cars with same properties but different values.


    Accessing Members of Structure

    We can access members of the structure using dot(.) operator.

*/





// There are two ways to initialize the value into the members of the structure

/*
    ->first way
        struct Student s1;
        strcpy(s1.name,"Subham");
        s1.roll = 202568081;
        s1.marks = 10.0;
*/

/*
    ->Second Way
        struct Student s2 = {"Anjaneya", 202560108, 9.9};
*/


#include <stdio.h>

typedef struct car{
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} CAR;


struct fuelCar{
    int fuel_tank_cap;
} fcar1, fcar2;

int main(){
    CAR c1 = {"DDis 190 Engine", "Diesel", 37, 5, 19.74};

    struct car c2 = {"Kappa", "Petrol", 22, 8, 14.5}; 

    fcar1.fuel_tank_cap = 45;
    fcar2.fuel_tank_cap = 30;

    printf("%d %d\n", c1.seating_cap, c2.seating_cap);

    printf("%d %d", fcar1.fuel_tank_cap, fcar2.fuel_tank_cap);

    return 0;
}