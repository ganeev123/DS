#include <iostream>
using namespace std;

// int main() {
//     int arr[100], n = 0; // array of size 100, n = current number of elements
//     int choice;

//     do {
//         cout << "\n------ MENU ------\n";
//         cout << "1. CREATE\n";
//         cout << "2. DISPLAY\n";
//         cout << "3. INSERT\n";
//         cout << "4. DELETE\n";
//         cout << "5. LINEAR SEARCH\n";
//         cout << "6. EXIT\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch(choice) {
//             case 1: {
//                 cout << "Enter number of elements: ";
//                 cin >> n;
//                 cout << "Enter " << n << " elements: ";
//                 for(int i = 0; i < n; i++) {
//                     cin >> arr[i];
//                 }
//                 break;
//             }
//             case 2: {
//                 cout << "Array elements are: ";
//                 for(int i = 0; i < n; i++) {
//                     cout << arr[i] << " ";
//                 }
//                 cout << endl;
//                 break;
//             }
//             case 3: {
//                 int pos, val;
//                 cout << "Enter position (0-" << n << "): ";
//                 cin >> pos;
//                 cout << "Enter value: ";
//                 cin >> val;
//                 if(pos >= 0 && pos <= n) {
//                     for(int i = n; i > pos; i--) {
//                         arr[i] = arr[i-1];
//                     }
//                     arr[pos] = val;
//                     n++;
//                     cout << "Element inserted.\n";
//                 } else {
//                     cout << "Invalid position!\n";
//                 }
//                 break;
//             }
//             case 4: {
//                 int pos;
//                 cout << "Enter position to delete (0-" << n-1 << "): ";
//                 cin >> pos;
//                 if(pos >= 0 && pos < n) {
//                     for(int i = pos; i < n-1; i++) {
//                         arr[i] = arr[i+1];
//                     }
//                     n--;
//                     cout << "Element deleted.\n";
//                 } else {
//                     cout << "Invalid position!\n";
//                 }
//                 break;
//             }
//             case 5: {
//                 int key, found = -1;
//                 cout << "Enter value to search: ";
//                 cin >> key;
//                 for(int i = 0; i < n; i++) {
//                     if(arr[i] == key) {
//                         found = i;
//                         break;
//                     }
//                 }
//                 if(found != -1) {
//                     cout << "Element found at position " << found << endl;
//                 } else {
//                     cout << "Element not found!\n";
//                 }
//                 break;
//             }
//             case 6:
//                 cout << "Exiting program...\n";
//                 break;

//             default:
//                 cout << "Invalid choice! Try again.\n";
//         }

//     } while(choice != 6);

//     return 0;
//--------QUESTION NUMBER 2----------------------------------------
// int main(){
//     int arr[7] = {1,2,3,7,2,3,8};
//     int n = 7;
//     for(int i = 0 ; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j] && i !=j){
//                 int pos = j;
//                 for(int k = pos; k<n-1;k++){
//                     arr[k] = arr[k+1];
//                 }
//                 n--;
//             }
//         }
//     }
//     for(int i =0 ; i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// Q4 a)
// void reverse(int* arr,int n){
//     for(int i = 0; i< n/2;i++){
//         swap(arr[i], arr[n-i-1]);
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     cout << "Original array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     reverse(arr, n);

//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Q4 b) matrix multiplication

// int main(){
//     int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     int b[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
//     int c[3][3] = {0};
//     for(int i = 0; i<3;i++){
//         for(int j = 0; j<3;j++){
//             for(int k = 0; k<3;k++){
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
// }

// Q4 C transpose of a matrix
// int main(){
//     int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     int b[3][3] = {0};
//     for(int i = 0; i < 3;i++){
//         for(int j = 0; j<3;j++){
//             b[i][j] = a[j][i];
//         }
//     }
//     for(int i = 0; i < 3;i++){
//         for(int j = 0; j<3;j++){
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q4) Write a program to find sum of every row and column of a 2d martix

int main(){
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rowSum[3] = {0};
    int colSum[3] = {0};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }

    cout << "Row sums: ";
    for(int i = 0; i < 3; i++) {
        cout << rowSum[i] << " ";
    }
    cout << endl;

    cout << "Column sums: ";
    for(int j = 0; j < 3; j++) {
        cout << colSum[j] << " ";
    }
    cout << endl;

    return 0;
}