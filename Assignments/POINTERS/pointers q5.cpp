//pointers q5
  
#include <iostream>
using namespace std;
  

char* copyString(char s[])
{
  
    char *s2, *p1, *p2;
  
    s2 = (char*)malloc(20);
    p1 = s;
    p2 = s2;
  
    
    while (*p1 != '\0') {
  
        // Copy the content of s1 to s2
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
  
    return s2;
}
  
int main()
{
    char s1[20] = "Talha";
    char* s2;
  
    s2 = copyString(s1);
    cout<<"string 1 (original) : "<<s1<<endl;
    cout<<"string 2 (duplicated) : "<<s2;
    return 0;
}