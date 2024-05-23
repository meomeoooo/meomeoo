#include<stdio.h>
#include<string.h>
// 1. Viet func nhap vao 1 mang n chuoi string
// 2. function in ra mang cac string
// 3. Sap xep mang string theo do dai chuoi tang dan

void instr(char str[][1000], int n) {
	for(int i=0; i<n; i++) {
		scanf("%s", str[i]);
	}
}

void outstr(char str[][1000], int n) {
	for(int i=0; i<n; i++) {
		printf("%s", str[i] );
	}
}
void swapstr(char str[][1000], int n) {
	char temp[1000];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (strlen(str[j]) > strlen(str[j+1])) {
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
		printf("%s", str[i]);
	}
}
int main () {
	int n;
	printf("Nhap so chuoi string:\n");
	scanf("%d", &n);
	char str[n][1000];
	// so luong mang 1000 so luong ky tu trong mang
	instr(str,n);
	outstr(str,n);
	swapstr(str,n);
}

