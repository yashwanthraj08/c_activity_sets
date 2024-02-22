#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
 {
    char input_str[100];
    char reversed_str[100];
    input_string(input_str);
    str_reverse(input_str, reversed_str);
    output(input_str, reversed_str);

    return 0;
}

void input_string(char *a)
 {
    printf("Enter a string: ");
    gets(a);
}
void str_reverse(char *str, char *rev_str)
 {
    int length = strlen(str);

    for (int i = 0; i < length; i++)
     {
        rev_str[i] = str[length - 1 - i];
    }

    rev_str[length] = '\0'; 
}


void output(char *a, char *reverse_a)
 {
    printf("Original String: %s\n", a);
    printf("Reversed String: %s\n", reverse_a);
}