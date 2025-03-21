

 char* replaceString(char* source, char *target, char *replaceText) {
        
  }
 typedef char*arrayString;
 int main() {
    int size;
    std::cout << "Enter the size of the string: ";
    std::cin >> size;
    std::cin.ignore();  // Ignore the newline character after the number input

    arrayString source = new char[size + 1];

    std::cout << "Enter a string: ";
    std::cin.getline(source, size + 1);

    arrayString target = new char[size + 1];
    std::cout << "Enter the target character: ";
    std::cin.getline(target, size + 1);
    std::cin.ignore();

   arrayString replaceText = new char[size + 1];
    std::cout << "Enter the replacement character: ";
    std::cin.getline(target, size + 1);
    std::cin.ignore();

    arrayString result = replaceString(source, target, replaceText);

    std::cout << "Modified string: " << result << std::endl;

    delete[] source;  // Free allocated memory

    return 0;
}