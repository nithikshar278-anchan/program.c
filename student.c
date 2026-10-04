#include <stdio.h>

int main()
{
    char students[100][100];
    int total, n, i;

    printf("Enter total number of students: ");
    scanf("%d", &total);

    for (i = 0; i < total; i++) {
        printf("Enter student name: ");
        scanf("%s", students[i]);
    }

    printf("Enter how many students to display: ");
    scanf("%d", &n);

    printf("First %d students:\n", n);

    for (i = 0; i < n; i++) {
        printf("%s\n", students[i]);
    }

    return 0;
}

