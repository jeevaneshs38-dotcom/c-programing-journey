#include <stdio.h>
#define MAX_STUDENTS 50
#define NAME_LEN 30
char get_grade(float marks) 
{if (marks >= 90) return 'A';
 else if (marks >= 75) return 'B';
 else if (marks >= 60) return 'C';
 else if (marks >= 40) return 'D';
 else return 'F';
}
 
int main(void) 
   {int n;
    char names[MAX_STUDENTS][NAME_LEN];
    float marks[MAX_STUDENTS];
    float total = 0;
    int top = 0;
 
    printf("Enter number of students (1-%d): ", MAX_STUDENTS);
    scanf("%d", &n);
 
    if (n < 1 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }
 
    /* Input */
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d name (no spaces): ", i + 1);
        scanf("%29s", names[i]);
 
        printf("Marks (0-100): ");
        scanf("%f", &marks[i]);
 
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Marks must be between 0 and 100. Try again.\n");
            i--;            /* repeat this student */
            continue;
        }
 
        total += marks[i];
        if (marks[i] > marks[top]) top = i;
    }
 
    /* Report */
    printf("\n%-5s %-20s %-8s %-5s\n", "No.", "Name", "Marks", "Grade");
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-8.2f %-5c\n",
               i + 1, names[i], marks[i], get_grade(marks[i]));
    }
 
    printf("\nClass average: %.2f\n", total / n);
    printf("Topper: %s (%.2f)\n", names[top], marks[top]);
 
    return 0;
}
 
