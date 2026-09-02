#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;
    char name [50];
    
    printf("enter an integer:");
    scanf("%d", &a);
    printf("enter a float value:");
    scanf("%f", &b);
    printf("enter a double value:");
    scanf("%lf", &c);
    printf("enter a single character:");
    scanf("%c", &ch);
    printf("enter a string(name):");
    scanf("%s", name);

    printf("integer entered: %d\n", a);
    printf("float entered: %.2f\n", b);
    printf("double entered: %.2lf\n", c);
    printf("character entered: %c\n", ch);
    printf("string entered: %s\n", name);
    return 0;
}



