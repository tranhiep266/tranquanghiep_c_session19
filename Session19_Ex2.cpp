#include <stdio.h>

int main(){
	FILE *ptr=fopen("bt01.txt","r");
	char word1;
	if(ptr==NULL){
		printf("Khong mo duoc file");
		return 1;
	}
	word1=fgetc(ptr);
	if(word1==EOF){
		printf("File khong co gi");
		return 1;
	}
	printf("Ky tu dau tien: %c\n",word1);
	fclose(ptr);
	printf("Ghi thong tin thanh cong");
	return 0;
}
