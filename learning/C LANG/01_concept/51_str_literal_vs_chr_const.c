// String literal and character constant are not same.

/*

    "H" is not equal to 'H'

    "H" is represented by a pointer to a character 'H'
    'H' is represented by an integer (ASCII Code: 72)

    printf("\n"); is not equal to printf('\n');

    printf expects a pointer to a character not the integer.

*/