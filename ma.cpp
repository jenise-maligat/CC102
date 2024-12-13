#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 4 == 0) {
                cout << "* ";
            }
            else if ((i + j) % 4 == 1) {
                cout << "# ";
            }
            else if ((i + j) % 4 == 2) {
                cout << "* ";
            }
			
          
            
        }
        cout << endl;
    }
    return 0;
}