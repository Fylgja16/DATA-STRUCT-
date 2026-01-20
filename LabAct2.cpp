// Simple function
#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello from a function!";
}

int main()
{
    greet();
    return 0;
}

// Func w Param
#include <iostream> 
using namespace std;

void displayNumber(int n)
{
    cout << "You entered: " << n;
}

int main()
{
    displayNumber (25); 
    return 0;
}

//Return Value
#include <iostream> 
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
cout << "Sum: " << add(10, 20);
return 0;
}

//Array
#include <iostream>
using namespace std;

int main()
{
    int nums[3] = {5, 10, 15};
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2];
    return 0;
}

//Looping through Array
#include <iostream> 
using namespace std;
int main()

{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
    cout << arr[i] << " ";
    }
    return 0;

}

//Avg Computation
#include <iostream> 
using namespace std;

float average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / (float)size;
}

int main()
{
    int scores[5] = {80, 85, 90, 75, 95};
    cout << "Average: " << average(scores, 5);
    return 0;
}

//Passing Array to Function
#include <iostream>
using namespace std;

void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int values[3] = {7, 14, 21};
    showArray(values, 3);
    return 0;
}

// 2D Array
#include <iostream> 
using namespace std;

int main()
{
int matrix[2][3] =
{
    {1, 2, 3},
    {4, 5, 6}
};
cout << matrix[0][0] << " ";
cout << matrix[0][1] << " ";
cout << matrix[0][2] << endl;
cout << matrix[1][0] << " ";
cout << matrix[1][1] << " " << matrix[1][2];
return 0;
}

//3D Array
#include <iostream> 
using namespace std;
int main()
{
    int cube[2][2][2] =
    {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    };
    cout << cube[0][0][0] << endl;
    cout << cube[0][1][1] << endl;
    cout << cube[1][0][1] << endl;
    cout << cube[1][1][0];
    return 0;
}