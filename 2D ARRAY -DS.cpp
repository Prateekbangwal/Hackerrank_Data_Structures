# Hour Glass problem 
# Solution is in C++ language
#include <iostream>

using namespace std;


int main(){
    int a[6][6],ar;
    for(int i = 0;i < 6;i++){
       for(int j = 0;j < 6;j++){
          cin >> a[i][j];
       }
    }
    int max=-63;
    for( int i=0; i<4; i++){
        for( int j=0; j<4; j++){
            ar=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(ar>max)
                max=ar;
        }
    }
    cout<<max;
    return 0;
}
