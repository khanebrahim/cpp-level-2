#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x;
    cout<<x<<endl;
    y++;
    x++;
    cout<<y<<endl;
    cout<<&x<<" \n"<<&y;
    
    
}

