#include <stdio.h>
int main() {
   FILE *fp;
   char *filename = {"sample.txt"};
   char *content;
   //printf("\nEnter file name.\n");
   //scanf("%s",&filename);
   printf("\nEnter content of file.\n");
   scanf("%s",&content);

   /* open for writing */
   fp = fopen(filename, "w");
   if( fp == NULL ) {
      printf("%s: failed to open. \n", filename);
      return -1;
   } else {

      while(fscanf(fp, "%s", content)!=-1){
   printf("%s ", content);


   printf("%s: opened in write mode.\n", filename);
   }
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   if( !fclose(fp) )
      printf("%s: closed successfully.\n", filename);
   return 0;

}
