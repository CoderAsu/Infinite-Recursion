// WAP to find the length of a given string to copy one string to another and concatenate your fname, mname and lname to fullname using functions.

#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string
}

void stringConcat(char fullname[], char fname[], char mname[], char lname[]) {
    int i = 0, j = 0;

    // Copy first name
    while (fname[i] != '\0') {
        fullname[j++] = fname[i++];
    }
    fullname[j++] = ' '; // Add space

    // Copy middle name
    i = 0;
    while (mname[i] != '\0') {
        fullname[j++] = mname[i++];
    }
    fullname[j++] = ' '; // Add space

    // Copy last name
    i = 0;
    while (lname[i] != '\0') {
        fullname[j++] = lname[i++];
    }
    fullname[j] = '\0'; // Null-terminate the full name
}



int main() {
    char fname[50], mname[50], lname[50];
    char fullname[150];
    char copyOfFname[50];

    // Input first name, middle name, and last name
    printf("Enter first name: ");
    scanf("%s", fname);
    printf("Enter middle name: ");
    scanf("%s", mname);
    printf("Enter last name: ");
    scanf("%s", lname);

    // Find length of first name
    int len = stringLength(fname);
    printf("Length of first name: %d\n", len);

    // Copy first name to another string
    stringCopy(copyOfFname, fname);
    printf("Copied first name: %s\n", copyOfFname);

    // Concatenate names to form full name
    stringConcat(fullname, fname, mname, lname);
    printf("Full name: %s\n", fullname);

    return 0;
}