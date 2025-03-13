using namespace std;
#include <iostream>

void fast_print() {
    for (int i; i < 100; i++) {
        cout << i + 1 << ". " << "Fast print" << endl;
    }
}

int main()
{
    fast_print();

    cout << "Changes" << endl;
}
