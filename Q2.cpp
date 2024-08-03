#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    vector<vector<int>> mat(row, vector<int>(col));
    cout<<"Enter the matrix elements: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }
    
    cout<<"The Transpose Matrix"<<endl;
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
