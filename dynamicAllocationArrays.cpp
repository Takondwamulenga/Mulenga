#include <iostream>
using namespace std;

int main(){
    int rows;
    int cols;

    cout<<"enter the number of rows(max 3): ";
    cin>>rows;

    if(rows > 3){
        cout<<"number of columns exceeds the limit.Exiting program"<<endl;
        return 1;
    }

    double**arr = new double*[rows];
    for(int i = 0; i<rows; ++i){
        for(int j = 0; j<cols; ++j){
            cout<<"enter value for element [" << i << "][ " << j << "]: ";
            cin >>arr[i][j];
        }
    }
    cout << "Values of the array:"<< endl;
    for(int i =0; i < rows; ++i){
        for(int j = 0; j < cols; ++i){
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    for(int i = 0; i < rows; ++i){
        delete[]arr[i];
    }
    delete[]arr;
    return 0;
}