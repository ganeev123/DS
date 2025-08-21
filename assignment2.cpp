//q1 1) Implement the Binary search algorithm regarded as a fast search algorithm with run-time 
//complexity of Ο(log n) in comparison to the Linear Search. 

#include <iostream>
using namespace std;

// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int n = 6;
//     int low = 0, high = n - 1, mid, key;
//     cout << "Enter the element to search: ";
//     cin >> key;
//     while(low <= high) {
//         mid = (low + high) / 2;
//         if(arr[mid] == key) {
//             cout << "Element found at index: " << mid << endl;
//             return 0;
//         } else if(arr[mid] < key) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
// }

// Q2  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent 
//elements if they are in wrong order. Code the Bubble sort with the following elements: 
// int main(){
//     int arr[7] = {64,34,25,12,22,11,90};
//     int n = sizeof(arr)/sizeof(arr[0]); 
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

//3) Design the Logic to Find a Missing Number in a Sorted Array.

// int main(){
//     int arr[5] = {1, 2, 3, 5, 6}; 
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int expectedSum = (n + 1) * (n + 2) / 2; 
//     int actualSum = 0;

//     for(int i = 0; i < n; i++) {
//         actualSum += arr[i];
//     }

//     int missingNumber = expectedSum - actualSum;
//     cout << "Missing number is: " << missingNumber << endl;
// }
//  String Related Programs 
//(a) Write a program to concatenate one string to another string. 


// int main(){
//     string str1 = "Hello, ";
//     string str2 = "World!";
//     string result = str1 + str2;
//     cout << "Concatenated string: " << result << endl;
//     return 0;
// }

//(b) Write a program to reverse a string. 
// int main(){
//     string str = "Ganeev";
//     for(int i = 0; i< str.length() / 2; i++) {
//         swap(str[i], str[str.length() - i - 1]);
//     }
//     for(int i = 0; i < str.length(); i++) {
//         cout << str[i];
//     }
// }

//Write a program to delete all the vowels from the string. 
// int main() {
//     string str = "Hello, World!";
//     string result = "";
    
//     for(char c : str) {
//         if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
//            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
//             result += c;
//         }
//     }
    
//     cout << "String after removing vowels: " << result << endl;
//     return 0;
// }

// Write a program to convert a character from uppercase to lowercase. 
// int main(){
//     char ch = 'A';
//     if(ch >= 'A' && ch <= 'Z') {
//         ch += 32; // Convert to lowercase
//     }
//     cout << "Lowercase character: " << ch << endl;
//     return 0;
// }

//8) Write a program to count the total number of distinct elements in an array of length n.
int main(){
    int arr[] = {1, 2, 3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                arr[j] = -1; // Mark duplicates as -1
            }
        }
    }
    int distinctCount = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != -1) {
            distinctCount++;
        }
    } 
    cout << "Total distinct elements: " << distinctCount << endl;
    return 0;      
} 