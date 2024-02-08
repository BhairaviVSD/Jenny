#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("The size of array is %d", size);

    int array[size];
    printf("Enter the elements of array\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    printf("The elements of the array are as follows\n");
    for (int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}