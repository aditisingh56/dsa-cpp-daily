#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector<int> vect={1, 2, 3, 4, 5};
    cout << "The elements of the vector are: ";
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }

    return 0;
}
