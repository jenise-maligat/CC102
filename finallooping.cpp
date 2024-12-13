#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 6; i++) {
        for(int j = 0; j <= 6; j++){
		if((i == 2 && j == 3) ||
		     (i ==3 && j == 2)  ||
			 (i == 4 && j == 3) ||
			 (i == 3 && j == 3) ||
		      (i == 3 && j == 4)){
				 cout << "  ";
			 }else if ((i + j) % 3 == 0) {
                 
				cout << "# ";
			} else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}