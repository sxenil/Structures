#include <stdio.h>
#include <string.h>
int main (){
    struct person{
        char name[20];
        int salary;
        int age;
    }p1, p2;

    printf ("Enter details of 1st person: \n");

    printf ("Name: %s \n", strcpy(p1.name, "Swapnil"));
    // scanf ("%d \n", &p1.salary);
    // scanf ("%d \n", &p1.age);
    p1.salary= 122000;
    p1.age= 19;
    printf ("Salary: %d \n", p1.salary);
    printf ("Age: %d \n", p1.age);
    return 0;
}