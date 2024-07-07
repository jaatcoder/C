#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the file for reading
    FILE *fptr = fopen("1.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    int arr[100], i = 0;
    int num;

    // Read integers from the file into the array
    while (fscanf(fptr, "%d", &num) == 1) {
        arr[i++] = num;
     //   printf("%d\n",arr[i]);
        if (i == 100) {
            break;
        }
    }

//for(int i=0;i<100;i++)printf("%d ",arr[i]);
    fclose(fptr); // Close the file after reading

    // Sort the array using bubble sort
    int temp;
    for (int j = 0; j < i - 1; j++) {
        for (int k = j + 1; k < i; k++) {
            if (arr[k] < arr[j]) {
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Open the file for writing (this truncates the file)
    FILE *wptr = fopen("1.txt", "w");
    if (wptr == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    // Write the sorted array to the file
    for (int j = 0; j < i; j++) {
        fprintf(wptr, "%d\n", arr[j]);
    }

    fclose(wptr); // Close the file after writing

    return 0;
}