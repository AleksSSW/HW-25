// HW 25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    
    setlocale(LC_ALL, "russian");
    
    //std::string s4(5, 'h');
    //std::cout << s4 << std::endl;
    
    //Задача 1. 
    /*std::string str = "Hello World!";
    char sym = 'l';
    std::string res;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == sym)
            res += sym;
    std::cout << res << std::endl;*/

    //Задача 2.
    //std::string str = "reviver";

    //Задача 3.
    /*std::string str = "Hello, my dear friend";
    std::cout << str.length() << std::endl;*/

    //Задача 4.
    std::string str = "Hello all the world!";
    char sym = 'e';
    int index = str.rfind('e');
    std::cout << " Последнее вхождение символа е начинается: " << index << std::endl;
    std::string str2 = str.substr(12);
    std::cout << str2 << std::endl;
    return 0;
}


