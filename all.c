#include <stdio.h>

int main() {
    char str[100];
    int state = 0; // q0 is starting state
    printf("Enter string (0s and 1s): ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if (state == 0) state = (str[i] == '0') ? 1 : 0;
        else if (state == 1) state = (str[i] == '1') ? 2 : 1;
        else if (state == 2) state = (str[i] == '0') ? 1 : 0;
    }

    if (state == 2) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
[09:43, 28/01/2026] Vedaaa: 1st
[09:43, 28/01/2026] Vedaaa: #include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int n = strlen(s);

    if (strcmp(s, "10") == 0) {
        printf("Accepted\n");
    } 
    else if (n >= 2) {
        int i = 0;
        if (s[0] == '0') i = 1;
        else if (s[0] == '1' && s[1] == '1') i = 2;
        else { printf("Rejected\n"); return 0; }

        while (s[i] == '0') i++; 
        if (s[i] == '1' && s[i+1] == '\0') printf("Accepted\n");
        else printf("Rejected\n");
    } 
    else printf("Rejected\n");
    return 0;
}
[09:43, 28/01/2026] Vedaaa: 2a
[09:43, 28/01/2026] Vedaaa: #include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    if (strcmp(s, "10") == 0) {
        printf("Accepted\n");
    } else {
        int i = 0;
        while (s[i] == '0') i++; 
        if (s[i] == '1' && s[i+1] == '\0') printf("Accepted\n");
        else printf("Rejected\n");
    }
    return 0;
}
[09:43, 28/01/2026] Vedaaa: 2b
[09:43, 28/01/2026] Vedaaa: #include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0, c_count = 0, valid = 1;
    printf("Enter string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'c') c_count++;
        else if (s[i] != 'a' && s[i] != 'b') {
            valid = 0;
            break;
        }
    }

    if (valid && c_count == 1) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
[09:43, 28/01/2026] Vedaaa: 2c
[09:43, 28/01/2026] Vedaaa: #include <stdio.h>
#include <string.h>

struct Symbol {
    char name[10];
    int addr;
} table[10];

int n = 0;

void insert() {
    printf("Enter Name and Address: ");
    scanf("%s %d", table[n].name, &table[n].addr);
    n++;
}

void display() {
    printf("\nName\tAddress\n");
    for(int i=0; i<n; i++) printf("%s\t%d\n", table[i].name, table[i].addr);
}

int main() {
    int ch;
    while(1) {
        printf("\n1.Insert 2.Display 3.Exit: ");
        scanf("%d", &ch);
        if(ch==1) insert(); else if(ch==2) display(); else break;
    }
    return 0;
}
[09:43, 28/01/2026] Vedaaa: 3
[09:43, 28/01/2026] Vedaaa: #include <stdio.h>
#include <ctype.h>
#include <string.h>

void analyze(char str[]) {
    if (strcmp(str, "int") == 0 || strcmp(str, "if") == 0)
        printf("%s is a Keyword\n", str);
    else if (isdigit(str[0]))
        printf("%s is a Constant\n", str);
    else
        printf("%s is an Identifier\n", str);
}

int main() {
    analyze("int");
    analyze("x");
    analyze("10");
    return 0;
}
[09:43, 28/01/2026] Vedaaa: 4
[09:43, 28/01/2026] Vedaaa: %{
#include <stdio.h>
%}

%%
"int"|"main"|"if"|"else"    { printf("%s is a Keyword\n", yytext); }
[a-zA-Z][a-zA-Z0-9]* { printf("%s is an Identifier\n", yytext); }
[0-9]+                      { printf("%s is a Constant\n", yytext); }
[+=\-*/]                    { printf("%s is an Operator\n", yytext); }
.|\n                        { /* Skip */ }
%%

int main() {
    printf("Enter code: ");
    yylex();
    return 0;
}
int yywrap() { return 1; }