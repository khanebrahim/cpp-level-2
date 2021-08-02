/*#include <iostream>    //invalid range
 
using namespace std;
 
int main()
{
    // declaring short variable
    short a;
 
    for (a = 32767; a < 32770; a++)
        cout << a << "\n";
 
    return 0;
}
*/

//valid range
#include <iostream> 
 
using namespace std;
 
int main()
{
    // declaring short variable
    short a;
 
    for (a = 32760; a < 32767; a++)
        cout << a << "\n";
 
    return 0;
}