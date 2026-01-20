#include <iostream> 
#include <queue> 
#include <stack>
#include <vector>
#include <chrono>
using namespace std;

//DATA
int arr1 [10] = {20, 27, 48, 59, 54, 50, 55, 23, 58, 42};
vector<int> vec1; 
vector<int> vec2; 
vector<int> vec3; 

//FUNCTIONS
void num1()
{
    cout << "Array 1 Contents: " << " ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << " " << endl;
}
void stk()
{
    stack<int> stck;
    for (int i = 0; i < 10; i++) 
    {
        stck.push(arr1[i]);
    }
    cout << " " << endl;

    for (int j = 0; j < 3; j++) //pop 3 times
    {
        stck.pop();
    }

    cout << "Stack Contents after 3 pops: " << " ";
    stack<int> tempStack = stck; 
    while (!tempStack.empty()) 
    {
        cout << tempStack.top() << " ";
        tempStack.pop();        
    }
    cout << " " << endl;

    vector<int> vec1;       
    while (!stck.empty()) 
    {
        vec1.push_back(stck.top());
        stck.pop();
    }

    cout << "Vector Contents from Stack: " << " ";  
    for (size_t i = 0; i < vec1.size(); i++) 
    {
        cout << vec1[i] << " ";
    }
    cout << " " << endl;

    //add contents to vec3
    for (size_t i = 0; i < vec1.size(); i++) 
    {
        vec3.push_back(vec1[i]);
    }
}
void qu()
{
    queue<int> que;

    for (int i = 0; i < 10; i++) 
    {
        que.push(arr1[i]);
    }
    cout << " " << endl;

    for (int j = 0; j < 3; j++) 
    {
        que.pop();
    }

    cout << "Queue Contents after 3 pops: " << " ";
    queue<int> tempque = que; 
    while (!tempque.empty()) 
    {
        cout << tempque.front() << " ";
        tempque.pop();        
    }
    cout << " " << endl;

    vector<int> vec2;       
    while (!que.empty()) 
    {
        vec2.push_back(que.front());
        que.pop();
    }

    cout << "Vector Contents from Queue: " << " ";  
    for (size_t i = 0; i < vec2.size(); i++) 
    {
        cout << vec2[i] << " ";
    }
    cout << " " << endl;

    //add contents to vec3
    for (size_t i = 0; i < vec2.size(); i++) 
    {
        vec3.push_back(vec2[i]);
    }
}
void mergedisp()
{
    cout << "Data Merging: " << " ";  
    for (size_t i = 0; i < vec3.size(); i++) 
    {
        cout << vec3[i] << " ";
    }
    cout << " " << endl;
    
}
void bubbleSort(vector<int>& arr) 
{
    auto start = chrono::high_resolution_clock::now();
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) 
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        if (!swapped)
            break;
    }

    cout << "Sorted Merged Data: "<< " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Time taken by bubble sort: " << duration.count() << " microseconds" << endl;

}
void selectionSort(vector<int> &arr) 
{
    int n = arr.size();
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < n - 1; ++i) 
    {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j; 
            }
        }
        swap(arr[i], arr[min_idx]);
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Time taken by selection sort: " << duration.count() << " microseconds" << endl;

}
vector<int> countsort(vector<int>& arr) 
{
    auto start = chrono::high_resolution_clock::now();
    int n = arr.size();

    // find the maximum element
    int maxval = 0;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    // create and initialize count array
    vector<int> count(maxval + 1, 0);

    // count frequency of each element
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // compute prefix sum
    for (int i = 1; i <= maxval; i++)
        count[i] += count[i - 1];

    // build output array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) 
    {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    return ans;

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Time taken by count sort: " << duration.count() << " microseconds" << endl;
}
void insertionsort(vector<int>& arr, int n) 
{   
    auto start = chrono::high_resolution_clock::now();
    for (int i = 1; i < n; ++i) 
    {
        int key = arr[i];
        int j = i - 1;

        // move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Time taken by insertion sort: " << duration.count() << " microseconds" << endl;
}

int main()
{
    num1();
    stk();
    qu();
    mergedisp();
    bubbleSort(vec3);
    selectionSort(vec3);
    countsort(vec3);
    insertionsort(vec3, vec3.size());
    return 0;
}
