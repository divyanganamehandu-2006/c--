#include<iostream>
using namespace std;


// // void printArray(){
    
// // }

// int main(){


//     int number[15];


//     // cout << "value at 14 index" << number[14] << endl;

//     // cout << "value at 15 index" << number[15] << endl;


//     cout<< endl << "Everything is fine" << endl<< endl;

//     return 0;
// }
void update(int arr[], int n){

    cout<< "Inside update function" << endl;

    for(int i=0; i<3; i++){
       cout << arr[i] << " ";
    }
    cout << endl;


    cout<<"going to main function" << endl;
}


int main(){

    int arr[3] = {1, 2, 3};

   update(arr, 3);
    for(int i=0; i<3; i++){
       cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}