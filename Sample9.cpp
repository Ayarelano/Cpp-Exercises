#include <iostream>
#include <windows.h>
#include <string>
 
int type(const std::string& str, bool flag) {
    int typespeed = 100; //The smaller the value, the faster (Can be changed)
    
    for (size_t i = 0; i < str.length(); i++) {
        Sleep(typespeed);
        std::cout << str[i];
    }
    std::cout << std::endl;
    
    if (flag) {
    system("cls"); //Delete text after typing
    }
    
    return 0;
}
 
int main() {
    system("title ^<3");
    
    // type(stringToType(str), DeleteAfterPrinting(boolean))
    
    type("Shet", true);
    type("Tulong", true);
    type("/* Nag iiba ng anyo* Argghhhhh", true);
    type("Di mapigilang mag-isippppppp <3 <3 T_T", true);
    type("Na baka sa tagal mahulog ang loob mo sa ibaa", false);
    
    return 0;
}