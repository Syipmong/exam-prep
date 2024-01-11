
#include <iostream>
#include <format>
#include <cmath>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::format;
using std::vector;


int main()
{
    string name = "Yipmong";
    int age = 30;
    double height = 11.5;
    string longStr = format("Hello, i am {}, I am {} inch height, i am {} years old",name , 38.5, age);

    int power = pow(2, 2);

    int utf8decimalEquiv = 97;
    char recovChar = static_cast<char>(utf8decimalEquiv);

    char justalph = 97;
    
   
    int arrayOfCNums[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };

    int sum = 0;

    for (int i = sizeof(arrayOfCNums) / sizeof(arrayOfCNums[0]) - 1; i >= 0 && sum < 10; i--)
    {
        sum += arrayOfCNums[i];
    }

    for (int num : arrayOfCNums)
    {
        
    }

    string yippee = format("My name is %s i am of %.2f height", "Yipmong", 20.500);

    vector<int> ages(1);

    ages.push_back(9);
    ages.push_back(5);
    ages.push_back(8);
    ages.push_back(30);
    ages.push_back(11);

    cout << ages.size() << endl;


}
