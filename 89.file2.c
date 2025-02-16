// Read/Write Structure to a File
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"Alice", 25};
    FILE *file = fopen("person.dat", "wb");

    fwrite(&p1, sizeof(struct Person), 1, file);
    fclose(file);

    struct Person p2;
    file = fopen("person.dat", "rb");
    fread(&p2, sizeof(struct Person), 1, file);
    fclose(file);

    printf("Name: %s, Age: %d\n", p2.name, p2.age);
    return 0;
}
