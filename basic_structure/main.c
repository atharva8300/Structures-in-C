#include <stdio.h>
#include <conio.h>

struct student
{
    int roll;
    char name[20];
    char course[20];
};
typedef struct student student ;

int main()
{
    student s[10];
    student solo = {100,"Rahul","upsc"}; // just another way of initialization
    int n;
    do
    {
        printf("\nenter the number of students[less than 10]\n");
        scanf("%d",&n);
    }while(n>10);
    printf("enter student details\n");
    for(int i=0;i<n;i++)
    {
        printf("details for student[%d]:\n",i);
        printf("roll number : ");
        scanf("%d",&s[i].roll);
        printf("\nname : ");
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("\ncourse : ");
        gets(s[i].course);
    }
    printf("\n");
    printf("student details : \n");
    printf("name\t\troll num\tcourse\n");
    for(int i=0;i<n;i++)
    {

        printf("%s\t\t%d\t\t%s",s[i].name,s[i].roll,s[i].course);
        printf("\n");
    }
    printf("%s\t\t%d\t\t%s",solo.name,solo.roll,solo.course);
    getch();
    return 0;
}
