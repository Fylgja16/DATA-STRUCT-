//Variables
#include <iostream>
using namespace std;

int main() 
{
    int age = 18;
    cout << "My ages is: " << age;

    return 0;
}

//Data Types
#include <iostream> 
using namespace std;

int main()
{
    int num = 10;
    float grade = 91.5; 
    char letter = 'A';
    
    cout << num << endl; 
    cout << grade << endl;
    cout << letter;
    
    return 0;
}

// For loop
#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }
    return 0;
}

//Arithmethic 
#include <iostream> 
using namespace std;

int main()
{
    int a = 5, b = 3;
    cout << "Sum: " << a + b << endl; 
    cout << "Product: " << a * b;
    return 0;
}

//If
#include <iostream> 
using namespace std;

int main()
{
    int number = 10;
    
    if (number > 5) 
    {
        cout << "Number is greater than 5";
    }

    return 0;
}

//If else
#include <iostream> 
using namespace std;

int main()
{
    int x = 8;
    
    if (x % 2 == 0) 
    {
        cout << "Even number";
    } 
    else 
    {
        cout << "Odd number";
    }
    return 0;
}

//Input
#include <iostream> 
using namespace std;

int main()
{
    string name;

    cout<<"Enter your name: "; cin >> name;
    cout << "Hello, " << name; 
    return 0;
}

//Strings
#include <iostream> 
using namespace std;

int main()
{
    string first = "C++ ";
    string second = "Programming";
    
    cout << first + second;
    return 0;
}

// While loop
#include <iostream> 
using namespace std;

int main()
{
    int i = 1;
    while (i <= 3) 
    {
        cout << i << endl;
        i++;
    }

    return 0;
}