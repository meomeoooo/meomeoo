#include<stdio.h>
#include<string.h>
// 1. Viet func nhap vao 1 mang n chuoi string
// 2. function in ra mang cac string
// 3. Sap xep mang string theo do dai chuoi tang dan
void instr(char str[], int n) {
	for(int i=0; i<n; i++) {
		printf("Nhap vao chuoi thu %d : ", i+1);
		scanf("%s", str[i]);
	}
}
void outstr(char str[][1005], int n){
	for(int i=0; i<n; i++) {
		printf("chuoi thu %d : %s\n", i+1, str[i]);
	}
}
void  swapstr(char str[][1005], int n) {
	printf("chuoi sau khi duoc sap xep la:\n");
	char t[1005];
	for (int i=0; i<n; i++) { 
		if (strlen(str[j-1]) > strlen(str[j])){
			strcpy(t, str[j-1]);
			strcpy(str[j-1], str[j]);
			strcpy(str[j], t);	
		}
	}
}
int main () {
	int n;
	printf("Nhap so chuoi string:\n");
	scanf("%d", &n);
	char str[n][1005];
	instr(str,n);
	printf("mang vua nhap la: ");
	outstr(str,n);
	swapstr(str,n);
	outstr(str,n);
	return 0;
}

