#include <stdio.h>
#include <stdbool.h>

typedef struct{
	/* Student */

	char name[50];
	int age;
	float gpa;
	bool isFullTime;
}Student;

int main() { 

	Student student1 ={"Spongebob", 30, 2.5, true};
	Student student2 ={"Patrict", 36, 1.0, false};

	printf("%s\n", student1.name);
	printf("%d\n",student1.age);
	printf("%.2f\n",student1.gpa);
	printf("%d\n",student1.isFullTime);
	printf("%s\n", (student1.isFullTime) ? "yes" : "no");

printf("%s\n", student2.name);
	printf("%d\n",student2.age);
	printf("%.2f\n",student2.gpa);
	printf("%d\n",student2.isFullTime);
	printf("%s\n", (student2.isFullTime) ? "yes" : "no");

	return 0;
}
