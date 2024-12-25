#include <stdio.h>
#include <string.h>

int main(){
	FILE *ptr=fopen("bt05.txt","w");
	char stringg[100];
	int numberLines;
	if(ptr==NULL){
		printf("Khong mo duoc file");
		return 1;
	}
	printf("Nhap so dong: ");
	scanf("%d",&numberLines);
	getchar();
	for(int i=0;i<numberLines;i++){
		fgets(stringg,100,stdin);
		fwrite(stringg, sizeof(char), strlen(stringg), ptr);
	}
	fclose(ptr);
	printf("Luu thong tin thanh cong\n");
	
	ptr=fopen("bt05.txt","r");
	if(ptr==NULL){
		printf("Khong mo duoc file");
		return 1;
	}
	while(fgets(stringg,sizeof(stringg),ptr)!=NULL){
		printf("Dong tu file: %s",stringg);
	}
	fclose(ptr);
	return 0;
}
