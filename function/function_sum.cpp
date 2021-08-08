#include<iostream>
using namespace std;
float add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}
int main(){
    float x=4.23 , y=9.34 ,z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
}