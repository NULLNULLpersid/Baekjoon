#include <stdio.h>
#include <string.h> 
int main() {
    int n=0;
    char c[1000000];   
    gets(c);
    for (char*p=strtok(c," ");p;p=strtok(NULL," ")) n++;
    printf("%d",n);
    return 0;
}