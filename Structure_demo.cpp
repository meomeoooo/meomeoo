#include<stdio.h>
#include<struct.h>
struct student {
	char name[50];
	int age;
	char address[50];
};
void ptintfStudent(struct student std);
int main () {
	struct strudent std1;
	printf("Vui long nhap ten sinh vien: ");
	scanf("%s", std1.name);
	printf("Vui long nhap tuoi: ");
	scanf("%d", &std1.age);
	printf("Vui long nhap dia chi: ");
	scanf("%s", std1. address);
	printfStudent(std1);
}
void printfStudent(struct student std) {
	printf("Ten sinh vien: %s\n", std.name);
	printf("Tuoi sinh vien: %d\n", std.age);
	printf("Dia chi sinh vien: %s\n", std.address);
}
