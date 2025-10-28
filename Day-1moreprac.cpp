// Day-1
// --------------------------------------------------Medium Level----------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main() {
    const int pen = 10, notebook = 40, file = 30, highlighter = 25;
    const float tax = 0.05, stdis = 0.10;

    int choice, p=0, n=0, f=0, h=0;
    int pbill=0, nbill=0, fbill=0, hbill=0;
    float curr_bill=0, totalbill=0, c_bill_tax=0;
    char yesno;

    cout << "--------------- Welcome to One8 Stationery Shop --------------------------" << endl;
    cout << "1. Pen - Rs 10\n2. Notebook - Rs 40\n3. File - Rs 30\n4. Highlighter - Rs 25\n5. Show Current Bill\n6. Checkout and Exit\n";
    cout << "-------------------------------------------------------------------------" << endl;

    do {
        cout << "\nEnter your Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the number of Pens: ";
                cin >> p;
                if(p <= 0) {
                    cout << "Invalid quantity!\n"; 
                    continue; 
                }
                pbill = p * pen;
                break;

            case 2:
                cout << "Enter the number of Notebooks: ";
                cin >> n;
                if(n <= 0) {
                    cout << "Invalid quantity!\n"; 
                    continue; 
                }
                nbill = n * notebook;
                break;

            case 3:
                cout << "Enter the number of Files: ";
                cin >> f;
                if(f <= 0) { 
                    cout << "Invalid quantity!\n"; 
                    continue; 
                }
                fbill = f * file;
                break;

            case 4:
                cout << "Enter the number of Highlighters: ";
                cin >> h;
                if(h <= 0) { 
                    cout << "Invalid quantity!\n"; 
                    continue; 
                }
                hbill = h * highlighter;
                break;

            case 5:
                curr_bill = pbill + nbill + fbill + hbill;
                c_bill_tax = curr_bill + (curr_bill * tax);
                cout << "Current Bill (with tax): Rs. " << c_bill_tax << endl;
                break;

            case 6:
                curr_bill = pbill + nbill + fbill + hbill;
                c_bill_tax = curr_bill + (curr_bill * tax);

                cout << "Are you a student (y/n)? ";
                cin >> yesno;

                if(yesno == 'y' || yesno == 'Y') {
                    cout << "Applying 10% Student Discount...\n";
                    totalbill = c_bill_tax - (c_bill_tax * stdis);
                } else {
                    totalbill = c_bill_tax;
                }

                cout << "Final Bill: Rs. " << totalbill << endl;
                cout << "Thank you! Visit again!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
                continue;
        }

    } while(choice != 6);

    return 0;
}
