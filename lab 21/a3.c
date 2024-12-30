#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Define a union
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    
    // Example of a structure
    struct Person person;
    strcpy(person.name, "Alice");
    person.age = 30;
    person.height = 5.5;

    printf("Structure:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);
    printf("Size of structure: %zu bytes\n\n", sizeof(person));


    // Example of a union
    union Data data;
    data.intValue = 10;
    printf("Union (intValue): %d\n", data.intValue);
    
    data.floatValue = 5.5; // Overwrites intValue
    printf("Union (floatValue): %.2f\n", data.floatValue);
    
    data.charValue = 'A'; // Overwrites floatValue
    printf("Union (charValue): %c\n", data.charValue);
    
    printf("Size of union: %zu bytes\n", sizeof(data));

}