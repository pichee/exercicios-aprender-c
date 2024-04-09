//Show a intervaland show the even numbers and the odd numbers
#include <stdio.h>
    #include <stdio.h>

int main() {
    int f, s, cp = 0, ci = 0;

    printf("Enter a whole number: ");
    scanf("%i", &f);
    printf("Enter another whole number: ");
    scanf("%i", &s);

    if (s == f) {
        printf("ERROR: Both numbers are equal.\n");
    } else if (s > f) {
        int temp = f;
        f = s;
        s = temp;

        while (f >= s) {
            int p = f % 2;
            if (p == 0) {
                cp++;
            } else {
                ci++;
            }
            f--;
        }
    }

    printf("In this interval there are %i even numbers and %i odd numbers.\n", cp, ci);

    return 0;
}
