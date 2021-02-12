#include <stdio.h>

int main()
{
    int marks, rollno;
    char st[50];
    printf("Enter the Student's name: ");
    scanf("%s", st);
    printf("\n");
    printf("Enter roll no.: ");
    scanf("%d", &rollno);
    printf("\n");
    printf("Enter marks:");
    scanf("%d", &marks);
    printf("\n");
    if ((marks<=100)&&(marks>=85))
    {
        printf("Congratulations!!! %s has passed with Grade A. Excellent work! \n", st);
    }
    else if ((marks<=84)&&(marks>=70))
    {
        printf("Congratulations!!! %s has passed with Grade B. Well done! \n", st);
    }
    else if ((marks<=69)&&(marks>=55))
    {
        printf("Congratulations!!! %s has passed with Grade C. Next time try to get a step higher.\n", st);
    }
    else if ((marks<=54)&&(marks>=40))
    {
        printf("Congratulations!!! %s has passed with Grade D. You could do well.\n", st);
    }
    else
    {
        printf("%s has passed with Grade F. You could have done well!\n", st);
    }

}
