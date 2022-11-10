#include <stdio.h>
#include <string.h>

void concatenate(char x[], char y[]){
    
    int i;
    for(i=0; x[i] != '\0'; i++){
      //Do nothing  
    }
    int j;
    for(j=0; y[j] != '\0'; j++){
        x[i+j] = y[j];
    }
}


int main(){

    char buf1[500];
    printf("Enter first word: ");
    scanf("%s", buf1);

    char buf2[500];
    printf("Enter second word: ");
    scanf("%s", buf2);

    printf("you entered: %s and %s\n", buf1, buf2);

    char buf3[500];
    strcpy(buf3, buf1);
    
    concatenate(buf1, buf2);
    printf("Concatenate: %s\n", buf1);

    strcpy(buf1, buf3);
    strcat(buf1, buf2);
    printf("strcat: %s\n",buf1);

    return 0;
}