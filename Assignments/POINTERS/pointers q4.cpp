// pointers q4

#include <iostream>
using namespace std;

int string_length(char* given_string)
{
   
    int length = 0;
    while (*given_string != '\0') {
        length++;
        given_string++;
    }
  
    return length;
}
  
int main()
{
    char given_string[] = "muhammadtalha";
    cout << string_length(given_string);
    return 0;
}