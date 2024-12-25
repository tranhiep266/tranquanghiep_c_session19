#include <stdio.h>
#include <string.h>

int main(){
	FILE *ptr=fopen("bt01.txt","w");
	char wrt[100];
	if(ptr==NULL){
		printf("Khong mo duoc file");
		return 1;
	}
	printf("Nhap chuoi bat ky: ");
	fgets(wrt,100,stdin);
	fwrite(wrt,sizeof(char),strlen(wrt),ptr);
	fclose(ptr);
	printf("Luu thong tin thanh cong");
	return 0;
}
