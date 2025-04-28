#include <iostream>
#include <string.h> // For strlen function
using namespace std;

char* copyString(const char* str){
    char* newStr=new char[strlen(str)+1]; // Allocate memory for the new string
    for (int i = 0;i<strlen(str);i++){
        newStr[i]=str[i]; // Copy each character
    }
    newStr[strlen(str)]='\0'; // Null-terminate the new string
    return newStr; // Return the new string
}

int main() {
    char* str=copyString("Hello, World!"); // Copy the string
    cout<<str<<endl; // Print the copied string
    delete[] str; // Free the allocated memory
    return 0;
}