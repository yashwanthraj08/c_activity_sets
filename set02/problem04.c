//Write a program to find Sum of composite number in an array of different numbers entered by the user
#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
 {

    int n = input_array_size();
    int a[n] ;
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
int input_array_size()
 {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) 
{
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
     {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
 {
    int sum = 0;

    for (int i = 0; i < n; i++)
     {
    
        if (a[i] > 1 && a[i] != 2 && a[i] % 2 == 0) 
        {
            sum += a[i];
        }
    }

    return sum;
}
void output(int sum)
 {
    printf("Sum of composite numbers in the array: %d\n", sum);
}
