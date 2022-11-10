#include <stdio.h>
#include <string.h>

int length(char x[]){
    int i = 0;
    for(i=0; x[i] != '\0'; i++){
      //do noting
    }
    return i;
}

int main(){

    char buf[500];
    printf("Enter a word: ");
    scanf("%s", buf);
    printf("word entered: \"%s\"\n", buf);

    int len = length(buf);
    printf("length: %d\n", len);

    len = strlen(buf);
    printf("strlen: %d\n", len);

    return 0;
}