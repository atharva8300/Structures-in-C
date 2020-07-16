//declare inner structures before declaring the outer structures.
#include <stdio.h>
#include <conio.h>
typedef struct
{
    int day,month,yr;
}Date;
typedef struct
{
    char name[20];
    Date dob;
}Student ;
int main()
{
    Student s1 = {"atharva"}; // dob will be initialized with default values
    printf("%d%d%d\n",s1.dob.day,s1.dob.month,s1.dob.yr);
    s1.dob.day=8;
    s1.dob.month=3;
    s1.dob.yr=2000;
    printf("\n%s\n%d\t%d\t%d",s1.name,s1.dob.day,s1.dob.month,s1.dob.yr);
    getch();
    return 0;
}
