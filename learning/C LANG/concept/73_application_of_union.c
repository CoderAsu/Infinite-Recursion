/*
    A store sells two kinds of items:
    1. Books
    2. Shirts

    Store owners want to keep records of the above mentioned items along with the relevant information.

    Books: Title, Author, number of pages, price
    Shirts: Color, size, design, price


    Initially, they decided to create a structure like below:

    struct store{
        double price;
        char *title;
        char *author;
        int num_pages;
        int color;
        int size;
        char *design;
    };

    This structure is perfectly usable but only price is common property in both the items and rest are individual.
*/

#include <stdio.h>
#pragma pack(1)

struct store{
    double price;
    union{
        struct{
            char *title;
            char *author;
            int num_pages;
        } book;

        struct{
            int color;
            int size;
            char *design;
        } shirt;
    } item;

};

int main(){
    struct store s;
    s.item.book.title = "The Alchemist";
    s.item.book.author = "Paulo Ciekgi";
    s.item.book.num_pages = 197;

    printf("%s \n", s.item.book.title);
    printf("%ld", sizeof(s));

    printf("\n");
    return 0;
}


/*
    here 28 < 44
    hence saving memory space
*/