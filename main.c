#include<stdio.h>
#include<string.h>
#include"operation.h"
// #define MAX_LIMIT 99999

/*
//! funtion to find the index of dollar character
int find_dollar(char *str){
    int len = strlen(str);
    //! printf("\ndollar: %d", len);
    int i=0;
    int result = i;
    while(i < len)
    {
        if(str[i] == '$'){
            result = i;
        }
        i++;
    }
    //! printf("\ndollar: %d", result);
    return result;
}

//! function to find the index of colon character
int find_semicolon(char *str){
    int len = strlen(str);
    //! printf("\ncolon: %d", len);
    int i=0;
    int result = i;
    while(i < len)
    {
        if(str[i] == ';'){
            result = i;
        }
        i++;
    }
    //! printf("\ncolon: %d", result);
    return result;
}

//! function to print the substring
void get_substring(char *str, int start, int end){
    if(start <= end){
        printf("%c", str[start]);
        get_substring(str, start+1, end);
    }
}
*/

//! main function
int main(){
    int MAX_LIMIT = 99999;
    char str[MAX_LIMIT];
    fgets(str, MAX_LIMIT, stdin); //! reading the input string
    // printf("\n");
    //! gets(str);
    //! printf("\n%s", str);
    int dollar_index = find_dollar(str); //! find index of dollar char
    int semicolon_index = find_semicolon(str); //! find index of colon char
    //! printf("\n%d\n%d", dollar_index, semicolon_index);
    get_substring(str, dollar_index, semicolon_index);
    printf("\n");
    return 0;
}
