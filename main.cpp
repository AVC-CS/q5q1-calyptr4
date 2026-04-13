#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input:" << endl;
    cin >> n;
    for (int i=0; i<n; i++){
        char letter = 64;
        for (int j=0; j<=i; j++){
            letter += 1;
            cout << letter;
            if (j<i){
                cout << " ";
                }
        }
        cout << endl;
    }
    // TODO: outer loop for each row

        // TODO: inner loop to print letters for this row

            // TODO: print the letter for this column

        // TODO: print newline after each row


    return 0;
}
