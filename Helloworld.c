#include <stdio.h>
#include <string.h>

int main() {
    char arr1[100], arr2[100], common[100];
    int i, j, k = 0;

    printf("Enter elements of the first array separated by commas: ");
    fgets(arr1, sizeof(arr1), stdin);

    printf("Enter elements of the second array separated by commas: ");
    fgets(arr2, sizeof(arr2), stdin);

    // Remove newline characters from input strings
    arr1[strcspn(arr1, "")] = '\0';
    arr2[strcspn(arr2, "")] = '\0';

    for (i = 0; arr1[i] != '\0'; i++) {
        for (j = 0; arr2[j] != '\0'; j++) {
            if (arr1[i] == arr2[j]) {
                common[k++] = arr1[i];
                break;
            }
        }
    }

    common[k] = '\0';

    printf("Common elements in both arrays: ['%s']", common);

    return 0;
}

