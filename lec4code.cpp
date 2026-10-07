#include<iostream>
using namespace std;

int main() {

    int n = 10;
    int num = 1;

    for(int i =0; i<n; i++){

        for(int j = 0 ; j<n-i-1; j++){
            cout << " ";
           
        }
        cout<< "*";
        if(i!=0){
            for(int j = 0 ; j<2*i-1; j++){
                cout << " ";
            }
            cout<< "*";
        }
        cout << endl;
        
    }//bottom half
     for(int i =0; i<n-1; i++){

        for(int j = 0 ; j<i+1; j++){
            cout << " ";
           
        }
        cout<< "*";
        if(i!= n-2){
            for(int j = 0 ; j<2*(n-i)-5; j++){
                cout << " ";
            }
            cout<< "*";
        }
        cout<<endl;
}
}
    // cin>>n; 

//     int row = 1;
//     while(row <= n){

//         int space = n - row ;

//         int col = 1;
//         while(col <=n){
//             char ch ='A' + row - 1;
//             cout<<ch;
//             col = col +1;
        

//         }
//         cout<<endl;
//         row = row + 1;

//     }
// }
