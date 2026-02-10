#include <stdio.h>
#include <string.h>
//10 + (0 + 11)0*1
//0*1 + 10
//(a+b) c (a+b)**
int main(){
    char str[100];
    scanf("%s", str);

    //a)
    // if (strcmp("10", str) == 0){
    //     printf("Accepted\n");
    //     return 0;
    // }
    // int i = 0;
    // if(str[0] == '0'){
    //     i += 1;
    // }else if(i + 1 < strlen(str) && str[0] == '1' && str[1] == '1'){
    //     i += 2;
    // }
    // else{
    //     printf("Rejected\n");
    //     return 0;
    // }   
    // while (str[i] == '0'){
    //     i++;
    // }
    // if(str[i] == '1' && str[i+1] == '\0'){
    //     printf("Accepted\n");}
    //     else{
    //         printf("Rejected\n");
    //     }
    // b)
    // if(strcmp(str, "10") == 0){
    //     printf("Accepted\n");
    //     return 0;
    // }
    // int i = 0;
    // while(str[i] == '0'){
    //     i++;
    // }
    // if(str[i] == '1' && str[i+1] == '\0'){
    //     printf("Accepted\n");
    // }else{
    //     printf("Rejected\n");
    // }
    //c)
    int i = 0;
    if(str[i] == 'c'){
        printf("Rejected\n");
        return 0;
    }
    i++;
    if(str[i] != 'c'){
        printf("Rejected\n");
        return 0;
    }
    i++;
    while(i < strlen(str)){
        if(str[i] != 'a' && str[i] != 'b'){
            printf("Rejected\n");
            return 0;
        }
        i++;    
    }
    printf("Accepted\n");
}