#include <stdio.h>

struct student
{
    int roll;
    float marks[3];
};
void bonusmarks(struct student t);

int main()
{
   struct student s= {10,70.7,55.6,67.2};
   bonusmarks(s);
   printf("%d %f %f %f ", s.roll,s.marks[0],s.marks[1],s.marks[2]);
    return 0;
}
void bonusmarks(struct student t)
{
    t.marks[0] +=10;
}