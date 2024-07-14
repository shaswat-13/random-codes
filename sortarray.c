//
//  main.c
//  C projects all
//
//  Created by shaswat on 10/06/2024.
//

#include <stdio.h>

void sortarray(int arr[], int n);

int main(int argc, const char * argv[]) 
{
    // asking for the number of elements to enter
    int size;
    printf("enter the numbers you want to enter: ");
    scanf("%i", &size);
    
    // taking input of the numbers
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter number no %i: ", i+1);
        scanf("%i", &numbers[i]);
    }
    
    // passing to a function to sort the array
    sortarray(numbers, size);
    
    printf("the array in ascending order is: \n");
    for(int i = 0; i < size; i++)
    {
        printf("%i\t", numbers[i]);
    }
    
    printf("\nthe array in descending order is: \n");
    for(int i = 0; i < size; i ++)
    {
        printf("%i\t", numbers[size - i -1]);
    }
    
    printf("\n the largest number is: %i, the smallest number is %i\n", numbers[size - 1], numbers[0]);
    
}

void sortarray(int arr[], int n)
{
    int swap;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap;
            }
        }
    }
}
