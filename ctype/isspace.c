#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
    char str[] = "hELl0 W8r1d~ i w4NT b3 a P1lOt!", str1[100];
    int i = 0;
    while(str[i] != '\0'){
        if(isupper(str[i])) str1[i] = tolower(str[i]);
        else if(islower(str[i])) str1[i] = toupper(str[i]);
        else if(isspace(str[i])) str1[i] = '\t';
        else str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    printf("before: %s\n", str);
    printf("after: %s", str1);
    return ;
}

/*
檢查該字母是否為空格(有很多種: https://www.tutorialspoint.com/c_standard_library/c_function_isspace.htm)
int isspace(int c)
int參數: 檢查該字母的ascii code
0: 非空格(false), 非0: 空格(true)
*/