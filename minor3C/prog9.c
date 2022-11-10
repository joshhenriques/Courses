#include <stdio.h>

void flip(char x[]){
    int i;
    for(i=0; x[i] != '\0'; i++){
        //Is lower case
        if(x[i] >= 'a' && x[i] <= 'z'){
            x[i] -= 32;
        }
        else if(x[i] >= 'A' && x[i] <= 'Z'){
            x[i] += 32;
        }
    }
}
int main(){

    char buf[500];
    printf("Enter a word: ");
    scanf("%s", buf);
    printf("word entered: %s\n", buf);

    flip(buf);
    printf("The flipped word is %s\n", buf);

    return 0;
}