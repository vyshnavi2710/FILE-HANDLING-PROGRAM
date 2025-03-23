#include<stdio.h>
#include<stdlib.h>
void main(){
char ch;
FILE *fp_read=NULL;
FILE *fp_write=fopen("abc.txt","w");
fp_read=fopen("/home/user/Desktop/text.txt","r");
FILE *fp_append=fopen("ab.txt","a");
fprintf(fp_append,"%s","hello world");
fputc('a',fp_write);
if(fp_read==NULL){
printf("error");
exit(1);
}
else{
     ch=fgetc(fp_read);
    printf("%c",ch);
    fclose(fp_read);
}
fclose(fp_write);
fclose(fp_append);
}

