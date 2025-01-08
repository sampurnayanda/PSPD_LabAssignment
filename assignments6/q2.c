#include <stdio.h>
#include <string.h>

// Define the structure for an element
typedef struct {
    int atomic_number;
    char name[20];
    char chemical_symbol[3];
    char class[20];
    double atomic_weight;
    int electrons_in_shells[7]; // Array for electrons in each shell
} element_t;

// Function to scan an element from user input
void scan_element(element_t *element) {
    printf("Enter atomic number: ");
    scanf("%d", &element->atomic_number);

    printf("Enter name: ");
    scanf("%s", element->name);

    printf("Enter chemical symbol: ");
    scanf("%s", element->chemical_symbol);

    printf("Enter class: ");
    scanf("%s", element->class);

    printf("Enter atomic weight: ");
    scanf("%lf", &element->atomic_weight);

    printf("Enter number of electrons in each shell (7 values, separated by spaces): ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &element->electrons_in_shells[i]);
    }
}

// Function to print an element
void print_element(const element_t *element) {
    printf("Atomic Number: %d\n", element->atomic_number);
    printf("Name: %s\n", element->name);
    printf("Chemical Symbol: %s\n", element->chemical_symbol);
    printf("Class: %s\n", element->class);
    printf("Atomic Weight: %.4f\n", element->atomic_weight);
    printf("Electrons in Shells: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", element->electrons_in_shells[i]);
    }
    printf("\n");
}

int main() {
    // Declare an element_t variable
    element_t sodium;

    // Populate the structure with sodium's data
    sodium.atomic_number = 11;
    strcpy(sodium.name, "Sodium");
    strcpy(sodium.chemical_symbol, "Na");
    strcpy(sodium.class, "alkali metal");
    sodium.atomic_weight = 22.9898;
    sodium.electrons_in_shells[0] = 2;
    sodium.electrons_in_shells[1] = 8;
    sodium.electrons_in_shells[2] = 1;
    for (int i = 3; i < 7; i++) {
        sodium.electrons_in_shells[i] = 0;
    }

    // Print the sodium element
    printf("Sodium Element:\n");
    print_element(&sodium);

    // Test the scan_element function
    element_t user_element;
    printf("\nEnter details for a new element:\n");
    scan_element(&user_element);

    // Print the user-provided element
    printf("\nUser -Provided Element:\n");
    print_element(&user_element);

    return 0;
}