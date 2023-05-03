//
//  main.cpp
//  String Maninpulations
//
//  Created by Elmar Jafarli on 03.05.23.
//

#include <iostream>
#include <string>


int main() {
        //std::strlean : Find the length of a string
        // real arrays and those decayed into pointers
//            const char message1 [] {"The skye is blue"};
//
//            //Array decays into pointer when we use const char
//    const char* message2 {"The sky is blue"};
//    std::cout <<"message1" << message1 << std::endl;
//
//    //strlen ignores null characters
//    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;
//
//    //Inclueds the null character
//    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
//
//    //strlen still works with decayed arrays
//    std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;
//
//    //Prints size of pointer
//    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
    
    // Returns negative   value if lhs appears before rhs in lexicographical order,
    //Zero if has and rhs compare equal.
    // and Positive if lhs appears after rhs in lexicographical order.
    
//    std::cout << std::endl;
//    std::cout << "std::strcmp : " << std::endl;
//    const char* string_data1 {"Alabama"};
//    const char* string_data2 {"Blabama"};
//
//    char string_data3 [] {"Alabama"};
//    char string_data4 [] {"Blabama"};
//
//    // Print out the comparison
//    std::cout <<"std::strcmp : ("<< string_data1 << ", " << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;
//
//    std::cout << "std::strcmp  ("<< string_data3 << ", " <<  string_data4 << ") : " << std::strcmp(string_data3, string_data4) << std::endl;
//
//    string_data1 = "Alabama";
//    string_data2 = "Alabamb";
    
    
//    const char* string_data1 {"Alabama"};
//    const char* string_data2 {"Blabama"};
//
//    size_t n {3};
//    std::cout<<std::endl;
//    std::cout<<"std::strcmp : " <<  std::endl;
//    std::cout<< "std::stncmp  (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1, string_data2,n) << std::endl;
        
        // Find the     first occurance  of character
        // CODE STOLEN  FROM THE DOCS
//    std::cout << std::endl;
//    std::cout << "std::strchr" << std::endl;
//    //docs : https://en.cppreference.com/w/cpp/string/byte/strchr
//
//    // we use std::strchr to find all the character one by one
//
//    const char *str {"Try not. Do. or do not. There is no try."};
//    // Can make this a const pointer to prevent users from it point somewhere else
//    char target = 'T';
//    const char *result = str;
//    int iterations{};
//    while ((result=std::strchr(result,target)) != nullptr) {
//        std::cout << "Found ' " << target << "'starting at' " << result << "'\n";
//        // Increment result, otherwise we'll find target at the same location
//        ++result;
//        ++iterations;
//    }
//    std::cout <<  "Iterations" <<  iterations << std::endl;
//
    // Find the     first occurance  of character
    // CODE STOLEN  FROM THE DOCS
//    std::cout << std::endl;
//    std::cout << "std::strchr" << std::endl;
//    //docs : https://en.cppreference.com/w/cpp/string/byte/strchr
    
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    
    
    const char *str {"Try not. Do. or do not. There is no try."};
    char target = 'T';
    const char* result{nullptr};
    int iterations{};
    while ((result=std::strchr(str,target)) != nullptr) {
         std::cout << "Found ' " << target << "'starting at' " << result << "'\n";
         ++str;
          ++iterations;
      }
    std::cout << "iterations" << iterations << std::endl;
    return 0;
}
