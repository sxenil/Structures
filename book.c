#include <stdio.h>
#include <string.h>
int main (){
    struct book{
        char name[40];
        float price;
        int nop;
    }a, b;

    printf ("Enter details of book A: \n");
    a.price= 159.99;
    a.nop= 279;
    strcpy(a.name, "The Alchemist");

    printf ("Name: %s \n", a.name);
    printf ("Price: %f \n", a.price);
    printf ("No. of pages: %d \n\n", a.nop);

    printf ("Enter details of book B: \n");
    a.price= 179.99;
    a.nop= 311;
    strcpy(a.name, "Ikigai");

    printf ("Name: %s \n", a.name);
    printf ("Price: %f \n", a.price);
    printf ("No. of pages: %d", a.nop);

return 0;

}