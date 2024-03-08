#include <iostream>
#include <string>

int main(){
    std::cout << "Hello World\n"; //could also use the "endl" operator before the semicolon and after the quote
    std::cout << "Next Line World" << std::endl;
    std::cout << "I'm alive" << std::endl;
    
    /*
variables:
int
double 
char 
string
bool : we give them value of true/false, but if we output they say 0 or 1
*/
    int myNum = 15;
    std::cout << myNum << std::endl;
    std::cout << "I am " << myNum << " days old" << std::endl;

    int x;
    std::cout << "type an integer" << std::endl;
    std::cin >> x;
    std::cout << "Your number is " << x << std::endl;
    float newNum = 32E2;
    std::cout << newNum << std::endl;
    char single = 'B'; //must use single quotes or you can use ASCII
    char a = 65, b = 66, c = 67;
    std::cout << a;
    std::cout << b;
    std::cout << c;
    int u, y, z;
    u = 4;
    y = 5;
    z = 3;
    const int minutesPerMinute = 1;


   
   std::string statement = "test string";
   std::cout << "\n" << statement << std::endl;


   std::string firstName, lastName;
   firstName = "Vincenet ";
   lastName = "Phan";
   std::string fullName = firstName + lastName;
   std::cout << fullName << std::endl;
   std::string anotherfirstName, anotherlastName;
   anotherfirstName = "Maryhan ";
   anotherlastName = "Phan";
   std::string anotherfullName = anotherfirstName.append(anotherlastName);
   std::cout << anotherfullName << std::endl;
   int size1 = fullName.size();
   int size2 = anotherfullName.length();

   std::string myString = "Hello";
   myString[0] = 'J';
   std::cout << myString << std::endl;
   myString = "Hello";
   std::cout << myString[0] << std::endl;
   
   std::string newFullName;
   std::cout << "Type your whole name";
   std::getline(std::cin, newFullName);
   std::cout << "your full name is " << newFullName;

/* 
String operators 
\\
\"
\'
\n
\t

*/


/*USER INPUT
we use cin >>
*/

// Outputs H
// Outputs Jello instead of Hello 
   
   //Comparison operators && || !

   /*Assignment Operators
   =
   +=
   -=
   *=
   /=
   %=
   &=
   |=
   ^=
   >>=
   <<=
   
   BitWise Operators
   &
   |
   ^
   ~
   <<
   >>
   */
   





   
   
   
    return 0;
}

