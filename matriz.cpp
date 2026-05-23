#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
#define m 10
#define n 10
int main() {
    srand(time(0));
    int M [m][n];
    for (int i=0; i<m;i++){
        for (int j=0; j<n; j++){
            M[i][j] = rand() % 200 - 99;
            cout << setw(5) << M[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i=0; i<m;i++){
        for (int j=0; j<n; j++){
            if (i==0){
                cout << setw(5) << M[i][j];
            }
            else if(j==0){
                cout << setw(5) << M[i][j];
            }
            else if(i==m-1){
                cout << setw(5) << M[i][j];
            }
            else if(j==n-1){
                cout << setw(5) << M[i][j];
            }
            else if(i==j){
                cout << setw(5) << M[i][j];
            }
            else if(i+j==m-1){
                cout << setw(5) << M[i][j];
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
}
