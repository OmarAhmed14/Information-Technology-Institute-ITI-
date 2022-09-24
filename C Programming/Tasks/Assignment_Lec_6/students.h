#ifndef STUDENTS_H
#define STUDENTS_H

typedef struct student
{
	char name [10];
	int id;
	int grade;
}students;

void store_information (students *arr,int size);
void print_information(students *arr,int size);


#endif