/*#include <iostream>

using namespace std;

int main(int argc, char *argv[2]) {
    int count;
    
    cout << "Hello ";
    for(count = 1; count < argc; count++)
         cout << argv[count] << "\n";
    return 0;
}*/

#include <iostream>

using namespace std;

int main(int argc, char *name[2]) {
    
    cout << "Hello ";
    for(int count = 1; count < argc; count++)
         cout << name[count] << "\n";
    return 0;
}