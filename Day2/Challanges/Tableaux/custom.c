#include <stdio.h>
#include <string.h>

int main() {
    int maxint, maxchar;
    int currentIntSize = 0, currentCharSize = 0;

    printf("Enter A Max For The Integers Array: ");
    scanf("%i", &maxint);

    printf("Enter A Max For The Chars Array: ");
    scanf("%i", &maxchar);

    int intarray[maxint];
    char chararray[maxchar];

    printf("Let's Fill The Ints Array:\n");
    for (int i = 0; i < maxint; i++) {
        printf("Enter The Number %i: ", i + 1);
        scanf("%i", &intarray[i]);
        currentIntSize++;
    }

    printf("\nLet's Fill The Chars Array:\n");
    for (int i = 0; i < maxchar; i++) {
        printf("Enter The Char %i: ", i + 1);
        scanf(" %c", &chararray[i]);
        currentCharSize++;
    }

    int choice;
    do {
        printf("\n1. Display An Array\n");
        printf("2. Add An Element\n");
        printf("3. Modify By Index\n");
        printf("4. Delete By Index\n");
        printf("5. Search\n");
        printf("6. Merge The Two Arrays\n");
        printf("7. Exit\n");
        printf(">>> ");
        scanf("%i", &choice);

        int workingArray, indexToModify;
        switch (choice) {
            case 1:
                printf("\n>>> In What Array?\n1. Int Array\n2. Char Array\n");
                scanf("%i", &workingArray);
                if (workingArray == 1) {
                    printf("Int Array:\n");
                    for (int index = 0; index < currentIntSize; index++) {
                        printf("index: %i value: %i\n", index, intarray[index]);
                    }
                } else if (workingArray == 2) {
                    printf("Char Array:\n");
                    for (int index = 0; index < currentCharSize; index++) {
                        printf("index: %i value: %c\n", index, chararray[index]);
                    }
                }
                break;

            case 2:
                printf("\n>>> In What Array?\n1. Int Array\n2. Char Array\n");
                scanf("%i", &workingArray);
                if (workingArray == 1 && currentIntSize < maxint) {
                    int newValue;
                    printf(">>> Enter The New Int Element: ");
                    scanf("%i", &newValue);
                    intarray[currentIntSize++] = newValue;
                } else if (workingArray == 2 && currentCharSize < maxchar) {
                    char newChar;
                    printf(">>> Enter The New Char Element: ");
                    scanf(" %c", &newChar);
                    chararray[currentCharSize++] = newChar;
                }
                break;

            case 3:
                printf("\n>>> In What Array?\n1. Int Array\n2. Char Array\n");
                scanf("%i", &workingArray);
                if (workingArray == 1) {
                    for (int index = 0; index < currentIntSize; index++) {
                        printf("index: %i value: %i\n", index, intarray[index]);
                    }
                    printf(">>> Enter The Element Index To Modify: ");
                    scanf("%i", &indexToModify);
                    if (indexToModify >= 0 && indexToModify < currentIntSize) {
                        printf(">>> Enter The New Value: ");
                        scanf("%i", &intarray[indexToModify]);
                    } else {
                        printf("Invalid index\n");
                    }
                } else if (workingArray == 2) {
                    for (int index = 0; index < currentCharSize; index++) {
                        printf("index: %i value: %c\n", index, chararray[index]);
                    }
                    printf(">>> Enter The Element Index To Modify: ");
                    scanf("%i", &indexToModify);
                    if (indexToModify >= 0 && indexToModify < currentCharSize) {
                        printf(">>> Enter The New Value: ");
                        scanf(" %c", &chararray[indexToModify]);
                    } else {
                        printf("Invalid index\n");
                    }
                }
                break;

            case 5:
                printf("\nIn What Array?\n1. Int Array\n2. Char Array\n");
                scanf("%i", &workingArray);
                if (workingArray == 1) {
                    int intToSearch;
                    printf(">>> Enter The Element To Search For: ");
                    scanf("%i", &intToSearch);
                    for (int index = 0; index < currentIntSize; index++) {
                        if (intToSearch == intarray[index]) {
                            printf("Element Found: \nindex: %i value: %i\n", index, intarray[index]);
                            break;
                        }
                    }
                } else if (workingArray == 2) {
                    char charToSearch;
                    printf(">>> Enter The Element To Search For: ");
                    scanf(" %c", &charToSearch);
                    for (int index = 0; index < currentCharSize; index++) {
                        if (charToSearch == chararray[index]) {
                            printf("Element Found: \nindex: %i value: %c\n", index, chararray[index]);
                            break;
                        }
                    }
                }
                break;

            case 6: {
                char mergedarray[100]; 
                int x = 0;
                
                for (int index = 0; index < currentIntSize; index++) {
                    x += sprintf(mergedarray + x, "%d", intarray[index]); 
                }
                
                for (int index = 0; index < currentCharSize; index++) {
                    mergedarray[x++] = chararray[index];  
                }
                printf("\nMerged Array:\n%s\n", mergedarray);
                break; 
            }

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}
