// program find whether a number is a composite number A Composite number has more than 2 factors.
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);



int main() 
{
    int n = input_number();
    int result = is_composite(n);
    output(n, result);
    return 0;
}
int input_number()
 {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x;
}

int is_composite(int n)
 {
    if (n < 4)
     {
        return 0;  
    }

    for (int i = 2; i <= n / 2; i++)
     {
        if (n % i == 0)
         {
            return 1;  
        }
    }

    return 0;  
}
void output(int n, int result)
 {
    if (result)
     {
        printf("%d is a composite number.\n", n);
    }
     else
     {
        printf("%d is not a composite number.\n", n);
    }
}


