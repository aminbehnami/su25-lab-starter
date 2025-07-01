#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char* name;
};

int main() {
  struct Student student;

  printf("Size of a struct Student: %lu bytes\n", sizeof(struct Student));

  student.id = 5;

  printf("Student's ID: %d\n", student.id);

  return 0;
}

