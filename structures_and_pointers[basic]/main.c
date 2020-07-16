#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //for malloc
typedef struct
{
    char name[20];
    int roll;
}student ;
int main()
{
    student *ptr[20];
    int i,n ;
    printf("\nenter number of students ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ptr[i]=(student *)malloc(sizeof(student));//dynamic allocation
        printf("\nenter details for student[%d]",i);
        printf("\nroll number : ");
        scanf("%d",&ptr[i]->roll);
        printf("\nenter name : " );
        scanf("%s",ptr[i]->name);
    }
    printf("\ndetails of students:\n");
    printf("Name\t\trollnum\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t",ptr[i]->name);
        printf("%d",ptr[i]->roll);
        printf("\n");
    }
    getch();
    return 0;
}
