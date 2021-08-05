#include<iostream>
using namespace std;
int main (){
    int A[5]{4,6,8,10,12};
    int *p=A;
    for (int i=0; i<5; i++)
    {
        cout<<*(p+i)<<endl;
        
    }
}