// sneha diwan
// 23070123126
// entc b2
// experment 13
#include <iostream>
#include <string>
using namespace std;

class Uni {
public:
    string uni = "sneha: ";
    void discipline() {
        cout << "Engineering" << endl;
    }
};

class Dep : public Uni {
public:
    string dept = "Electronics & Tele-Communication";
};

int main() {
    Dep u1;
    u1.discipline();
    cout << u1.uni + u1.dept << endl;
    return 0;
}

/*
Output 
 Engineering
sneha: Electronics & Tele-Communication


=== Code Execution Successful ===


*/
