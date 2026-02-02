#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[][4], int row, int cols){
    int sum = 0;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0; j < cols ; j++){
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
}
void rowSum(int arr[][4], int row, int cols){
    for(int i = 0 ; i < row ; i++){
        int rowS = 0;
        for(int j = 0; j < cols ; j++){
            rowS += arr[i][j];
        }
        cout << rowS << endl;
    }
}
int maxRowSum(int arr[][4], int row, int cols){
    int max_sum = INT_MIN;
    int max_index = -1;
    for(int i = 0 ; i < row ; i++){
        int rowS = 0;
        for(int j = 0; j < cols ; j++){
            rowS += arr[i][j];
        }
        if(max_sum < rowS){
            max_sum = rowS;
            max_index = i;
        }
    }
    return max_index;
}
int maxColSum(int arr[][4], int rows, int cols){
    int max_colsum = INT_MIN;
    int max_index = -1;
    for(int i = 0 ; i < cols ; i++){
        int sum = 0;
        for(int j = 0 ; j < rows ; j++){
            sum += arr[j][i];
        }
        if(max_colsum < sum){
            max_colsum = sum;
            max_index = i;
        }
    }
    return max_index;
}
void wavePrint(int arr[][4], int row, int col){
    for(int i = 0 ; i < col ; i++){
        if(i % 2 == 0){
            for(int  j = 0 ; j < row ; j++){
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }else{
            for(int  j = row - 1 ; j >= 0 ; j--){
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }

    }
}
void printSprial(int arr[][4], int rows, int cols){
    int tr = 0, lc = 0, br = rows - 1, rc = cols - 1;
    while(tr <= br && lc <= rc){
        // print top tow
        for(int i = lc ; i <= rc ; i++){
            cout << arr[tr][i] << " ";
        }
        tr++;
        // print right column
        for(int i = tr ; i <= br ; i++){
            cout << arr[i][rc] << " ";
        }
        rc--;
        // print bottom row
        for(int i = rc ; i >= lc ; i--){
            cout << arr[br][i] << " ";
        }
        br--;
        //  print left column
        for(int i = br ; i >= tr ; i--){
            cout << arr[i][lc] << " ";
        }
        lc++;
    }
}
int main(){
    int arr[4][4] = {1,7,4,16,11,15,5,10,2,4,16,3,9,13,8,12};
    
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // printSum(arr,4,4);
    // rowSum(arr,4,4);
    // cout << maxRowSum(arr,4,4) << endl;
    // cout << maxColSum(arr,4,4) << endl;
    // wavePrint(arr,4,4);
    printSprial(arr,4,4);
    return 0;
}