#include<Stdio.h>
#include<string.h>
int main () {
	char str1[20], str2[20];
	printf("Nhap vao chuoi str1: ");
	scanf("%s", str1);
	
	//gets(str1)
	printf("Gia tri chuuoi str1: %s\n", str1);
	//copy
	strcpy(str2,str1);
	printf("Gia tri chuoi str2: %s\n", str2);
	//cat
	strcat(str1, str2);
	printf("Gia tri chuoi str1: %s\n", str1);
	int compare = strcmp(str2, str1);
	// str2 > str1 => 1
	// str2 < str1 => -1
	// str2 = str1 => 0
	printf("Gia tri compare: %d", compare);
	//check ky tu
	char *position;
	position = strchr(str1, 'p');
	printf("Vi tri o nho: %d\n", position);
	printf("Vi tri char: %d\n", position - str1);
	//length
	printf("Do dai chuoi str1: %d", strlen(str1));
}
