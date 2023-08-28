#include<iostream>
using namespace std;

int main(){

  int n = 10;

  for(int row=0; row<n; row++){
    for(int col=0; col<n+row; col++){
        if(col >= n-row-1){
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
    }
    cout<<endl;
  }
  
  return 0;
}