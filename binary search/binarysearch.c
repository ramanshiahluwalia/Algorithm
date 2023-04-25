// implementing binary search

#include <stdio.h>

void Bubble(int a[], int n);
int Binary(int a[], int element, int n);

int main()
{
    int arr[5] = {33, 77, 88, 55, 44};

    int key;

    printf("Enter an element: ");
    scanf("%d", &key);

    Bubble(arr, 5);
    int result = Binary(arr, key, 5);

    if(result == 1)
    {
        printf("Element found.\n");
    }
    else
    {
        printf("Element not found.\n");
    }
    

    return 0;
}


// bubble sort (ascending order)
void Bubble(int a[], int n)
{
    int p = n - 1;
    int c = n - 1;

    int i, j;

    for(i = 0; i < p; i++)
    {
        for(j = 0; j < c - i; j++)
        {
            
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

        }
    }
}


int Binary(int a[], int element, int n)
{
    int lower = 0;
    int upper = n;

    int mid;

    while(lower <= upper)
    {
        mid = (lower + upper) / 2;

        if(element == a[mid])
        {
            return 1;
        }
        else if(element > a[mid])
        {
            lower = mid + 1;
        }
        else
        {
            upper = mid - 1;
        }

    }

    return -1;
}
