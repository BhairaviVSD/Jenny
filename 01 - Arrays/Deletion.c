#include <stdio.h>

int main()
{
    int size, array[50];

    printf("Enter the size of array less than 50\n");
    scanf("%d", &size);
    printf("The size of array is %d\n", size);

    printf("Enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The elements of the array are as follows\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    int pos;
    printf("\nEnter the position of element to be deleted\n");
    scanf("%d", &pos);

    if (pos <= 0 || pos >= size)
    {
        printf("Invalid Position");
    }
    else
    {
        for (int i = pos - 1; i < size; i++)
        {
            array[i] = array[i + 1];
        }
        size--;
        printf("The elements of the updated array after deletion are as follows\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}