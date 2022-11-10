#include <iostream>

using namespace std;

int main(int argc, char *argv[2]) {
    int count;
    
    cout << "Hello ";
    for(count = 1; count < argc; count++)
         cout << argv[count] << "\n";
    return 0;
}