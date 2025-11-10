#include <iostream>
using namespace std;

int main(){

    int rows = 3;
    int cols = 3;

    int ary[rows][cols] = {
     { 1,2,3 },
     { 4,5,6 },
     { 7,8,9 },
    };

    int i,j,transposed[rows][cols];

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols ;j++)
            cout<<ary[i][j]<<" ";
        cout<<endl;
    }

    for (int i = 0; i <rows; i++) {
        for (int j = 0; j <cols; j++) {
        transposed[i][j] = ary[j][i];
        }
    }

    cout<<endl;

    for(i = 0; i < rows; i++){
         for(j = 0; j < cols ;j++)
            cout<<transposed[i][j]<<" ";
         cout<<endl;
    }
}
