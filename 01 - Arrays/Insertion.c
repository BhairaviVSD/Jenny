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

    int pos, ele;
    printf("\nEnter the position of element to be inserted\n");
    scanf("%d", &pos);

    printf("Enter element to be inserted\n");
    scanf("%d", &ele);

    if (pos <= 0 || pos > size)
    {
        printf("Invalid Position");
    }
    else
    {
        if (pos == size)
        {
            array[size] = ele;
        }
        else
        {
            for (int i = size - 1; i >= pos - 1; i--)
            {
                array[i + 1] = array[i];
            }
            array[pos - 1] = ele;
        }
        size++;
        printf("The elements of the updated array after insertion are as follows\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}