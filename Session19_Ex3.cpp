#include <stdio.h>
#include <string.h>

int main(){
	FILE *ptr=fopen("bt01.txt","a");
	char stringAdd[100];
	if(ptr==NULL){
		printf("Khong mo duoc file");
		return 1;
	}
	printf("Nhap chuoi bat ky: ");
	fgets(stringAdd,100,stdin);
	fwrite(stringAdd,sizeof(char),strlen(stringAdd),ptr);
	fclose(ptr);
	printf("Luu thong tin thanh cong");
	return 0;
}
