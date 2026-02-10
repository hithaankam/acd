#include <stdio.h>
#include <string.h>
int main(){
    int curr = 0;
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        char ch = str[i];
        if(curr == 0){
            if(ch == '0'){
                curr = 1;
            }
            
        }else if (curr == 1){
            if(ch == '1'){
                curr = 2;
            }
        }else{
            if(ch == '0'){
                curr = 1;
            }else{
                curr = 0;
            }
        }
    }
    if(curr == 2){
        printf("Accepted\n");   
    }
    else{
        printf("Rejected\n");
    }
}