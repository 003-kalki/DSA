#include <iostream>
#include <string>

std::string modifyString(std::string str, int len) {
    if (len == 2) {
        return "i";  
    } 
    else if (len > 2) {
        str.erase(len - 2, 2);  
        return str + "i";  
    }
    return str;  
}

int main() {
    std::string str = "us";
    int len = str.length();
    std::string plural = modifyString(str, len);
    std::cout << plural << std::endl;  
}
