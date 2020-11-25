#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
    char name[10];
    int age;
};

void main()
{
    struct emp e;

    FILE *write,*read;
	write = fopen("lab_10.txt", "a");
    read  = fopen("lab_10.txt", "r");
    printf("Enter name :\n");
    scanf("%s", &e.name);
    printf("\nEnter age :\n");
	scanf("%d", &e.age);

    fputs(&e.name, write);
    //fputs("\n", write) ;
    fputs(&e.age, write);

    fclose(write);
    do
    {
        fgets(e.name,e.age,read);
        printf("%s, %d",e.name,e.age);
    }
    while(!feof(read));
}
