#include <iostream>
#include<string>
using namespace std;

void removeSpaces(char *str){

    int count = 0;

    for(int i=0; str[i]; i++){
        if(str[i] != ' '){
           str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main(){
    char str[] = " hr ithik is g ee ks fo r g e ek s";

    removeSpaces(str);

    cout<<str;
}