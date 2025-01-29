#include <stdio.h>
#include <string.h>

// Function to search for a name in a list
int findName(char nameList[][20], int size, char nameToFind[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(nameList[i], nameToFind) == 0) {
            return i; // Return the index if the name is found
        }
    }
    return -1; // Return -1 if the name is not found
}

int main() {
    // Predefined list of names
    char nameList[5][20] = {
        "Max",
        "Felix",
        "Michail",
        "Roberto",
        "Fuchsbauer"
    };

    char nameToFind[20];
    
    // Ask the user for a name to search
    printf("Enter a name to search: ");
    scanf("%s", nameToFind);

    // Search for the name in the list
    int index = findName(nameList, 5, nameToFind);
    
    // Display the result
    if (index != -1) {
        printf("Name '%s' found at index %d.\n", nameToFind, index);
    } else {
        printf("Name '%s' not found in the list.\n", nameToFind);
    }

    return 0;
}
