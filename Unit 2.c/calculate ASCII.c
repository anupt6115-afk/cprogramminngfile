#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    printf("the value of ASCII is '%c' is :%d\n",ch,ch);
    if(ch>='a' && ch<='z'){
        printf("the UpperCase :%c\n",ch -32);
    }
    else if(ch>='A' && ch<='Z'){
        printf("the lowercase :%c\n", ch + 32);
    }
    else{
       printf ("the enterned is not alphabet.\n");
    }

    return 0;
}