#include<stdio.h>
struct student {
	char name[50];
	int age;
	char address[50];
};
void printfStudent(struct student std);
	int n;
	for(int i=0; i<n; i++) {
	printf("Ten sinh vien: %s\n", std.name);
	printf("Tuoi sinh vien: %d\n", std.age);
	printf("Dia chi sinh vien: %s\n", std.address);
	}
int main () {
	printfStudent (std, n);
}
