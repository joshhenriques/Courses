#include <stdio.h>
#include <string.h>

void reverse_display(char x[]){
    int i;
    printf("Reversed Display: ");
    for(i= strlen(x); i >= 0; i--){
      printf("%c", x[i]);
    }
    printf("\n");
}

void reverse(char x[]){
    int len = strlen(x);
    int mid = len/2;

    int i;
    char temp;
    for(i= 0; i < mid; i++){
        temp = x[i]; 
        x[i] = x[len-1];
        x[len-1] = temp;

        len--;
    }
    
}

int main(){

    char buf[500];
    printf("Enter a word: ");
    scanf("%s", buf);
    printf("word entered: \"%s\"\n", buf);

    reverse_display(buf);

    reverse(buf);
    printf("Reverse string: %s\n", buf);
    return 0;
}