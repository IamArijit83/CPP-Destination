// Practice Day-1---------------------------------------------------------------------------------------------------------------

// ---------------------------Cafeteria Billing System-----------------------------------------------------------------------//
#include<iostream>
using namespace std;

int main(){
    cout << "----------------------------Welcome To Your One8 College Cafeteria----------------------------------------" << endl;
    
    int coffee = 50;
    int sandwich = 80;
    int juice = 60;
    const float tax = 0.05;

    float bill = 0, sbill = 0, jbill = 0, cfbill = 0, tbill = 0;
    int choice, c = 0, s = 0, j = 0;

    cout << "----------Cafeteria Menu--------------" << endl;
    cout << "Please select your desired order by pressing 1, 2, 3 or 4" << endl;
    cout << "1. Coffee - Rs 50 \n2. Sandwich - Rs 80 \n3. Juice - Rs 60 \n4. Press 4 to Exit!" << endl;

    do {
        cout << "\nPlease enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You Selected Coffee! " << endl;
                cout << "Enter the number of coffees: ";
                cin >> c;
                cout << c << " Coffee(s) Added!" << endl;
                break;
            
            case 2:
                cout << "You Selected Sandwich! " << endl;
                cout << "Enter the number of Sandwiches: ";
                cin >> s;
                cout << s << " Sandwich(es) Added!" << endl;
                break;
            
            case 3:
                cout << "You Selected Juice! " << endl;
                cout << "Enter the number of Juices: ";
                cin >> j;
                cout << j << " Juice(s) Added!" << endl;
                break;

            case 4:
                cout << "Exiting..." << endl;
                if (c == 0 && s == 0 && j == 0) {
                    cout << "Have a Nice Day!" << endl;
                } 
                else if (c > 0 && s == 0 && j == 0) {
                    cfbill = (c * coffee);
                    tbill = cfbill + (cfbill * tax);
                    cout << "Your bill for only Coffee is: Rs " << tbill << endl;    
                }
                else if (c == 0 && s > 0 && j == 0) {
                    sbill = (s * sandwich);    
                    tbill = sbill + (sbill * tax);
                    cout << "Your bill for only Sandwich is: Rs " << tbill << endl;
                }
                else if (c == 0 && s == 0 && j > 0) {
                    jbill = (j * juice);
                    tbill = jbill + (jbill * tax);    
                    cout << "Your bill for only Juice is: Rs " << tbill << endl;
                }
                else {
                    bill = ((c * coffee) + (s * sandwich) + (j * juice));
                    tbill = bill + (bill * tax);
                    cout << "Your Total bill was: Rs " << tbill << endl;
                    cout << "Thank You! Have a nice day! " << endl;
                }
                break;

            default:
                cout << "Enter a valid choice (between 1-4)" << endl;
        }

    } while (choice != 4);

    return 0;
}
