#include <stdio.h>
#include <string.h>

struct Student{
int age;
char name[50];
int year;
float gpa;
};

int main(){

struct Student St1;
strcpy(St1.name,"Ahmed");
// St1.name  = s;
St1.age = 21;
St1.year = 2003;
St1.gpa = 3.9;

printf("name: %s\n", St1.name);
printf("age: %d\n", St1.age);
printf("year: %d\n", St1.year);
printf("gpa: %f\n", St1.gpa);

}