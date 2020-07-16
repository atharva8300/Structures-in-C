/*
we can pass an entire structure as a function as an argument
when a structure is passed as an argument it is passed by call by value method
*/
#include <stdio.h>
#include <conio.h>

typedef struct
{
    int roll;
    char name[20];
}student ;

 void display_structure(student s);
 student edit_details(student s);
 int main()
 {
     student s1 = {100,"atharva"};
     student s2;
     display_structure(s1);
     printf("\nedit the details\n");
     s1=edit_details(s1);//we can't compare structures but we can one struct variable to another struct variable of SAME type
     printf("after editing\n");
     display_structure(s1);
     getch();
     return 0;
 }
student edit_details(student s)
{
    printf("\nenter name\n");
    gets(s.name);
    printf("\nenter roll\n");
    scanf("%d",&s.roll);
    return s;
}
void display_structure(student s)
{
    printf("%s\n",s.name);
    printf("%d",s.roll);

}
