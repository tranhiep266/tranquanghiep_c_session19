#include <stdio.h>

int main(){
	FILE *ptr=fopen("bt01.txt","r");
	char readFirstLine[100];
	if(ptr==NULL){
		printf("Khong mo duoc file");
		return 1;
	}
	fgets(readFirstLine,sizeof(readFirstLine),ptr);
	printf("%s",readFirstLine);
	fclose(ptr);
	return 0;
}
