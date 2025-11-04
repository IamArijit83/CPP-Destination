// // ------------------------------------Day-1 Project------------------------------------------------------------
// // ----------------------------------Movie Ticket Counter-------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    cout<<"-----------------------------------------Welcome To One8 Movies-----------------------------------------"<<endl;
    cout<<"Available Movies:"<<endl;
    cout<<"1. F1:The Movie - Rs.250\n2. Ford Vs Ferrari - Rs.200\n3. Rush - Rs.150\n";
    cout<<"--------------------------------------------------------------------------------------------------------"<<endl;

    // Constants
    const int f1 = 250, ff = 200, r = 150;
    const float gst = 0.18;
    const float group_discount = 0.10;    // 10% for 5+ tickets
    const float member_discount = 0.05;   // 5% for members

    // Variables to store total tickets per movie
    int f1_t = 0, ff_t = 0, r_t = 0;
    int choice, mov, tickets;
    char membership;

    do {
        cout<<"\n------------------------------- MENU -------------------------------\n";
        cout<<"1. Book Tickets\n2. Cancel Tickets\n3. View Current Bookings\n4. Checkout and Exit\n";
        cout<<"-------------------------------------------------------------------\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            // BOOK TICKETS
            case 1:
                cout<<"Select movie:\n1. F1:The Movie\n2. Ford Vs Ferrari\n3. Rush\n";
                cout<<"Your choice: ";
                cin>>mov;
                cout<<"Enter number of tickets: ";
                cin>>tickets;

                if(tickets <= 0){
                    cout<<"Invalid number of tickets!\n";
                    break;
                }

                switch(mov){
                    case 1:
                        f1_t += tickets;
                        cout<<tickets<<" tickets booked for F1:The Movie.\n";
                        break;
                    case 2:
                        ff_t += tickets;
                        cout<<tickets<<" tickets booked for Ford Vs Ferrari.\n";
                        break;
                    case 3:
                        r_t += tickets;
                        cout<<tickets<<" tickets booked for Rush.\n";
                        break;
                    default:
                        cout<<"Invalid movie choice!\n";
                        break;
                }
                break;

            // CANCEL TICKETS
            case 2:
                cout<<"Select movie to cancel from:\n1. F1:The Movie\n2. Ford Vs Ferrari\n3. Rush\n";
                cout<<"Your choice: ";
                cin>>mov;
                cout<<"Enter number of tickets to cancel: ";
                cin>>tickets;

                switch(mov){
                    case 1:
                        if(tickets <= f1_t) { f1_t -= tickets; cout<<"Cancelled "<<tickets<<" F1 tickets.\n"; }
                        else cout<<"Invalid cancellation amount!\n";
                        break;
                    case 2:
                        if(tickets <= ff_t) { ff_t -= tickets; cout<<"Cancelled "<<tickets<<" Ford Vs Ferrari tickets.\n"; }
                        else cout<<"Invalid cancellation amount!\n";
                        break;
                    case 3:
                        if(tickets <= r_t) { r_t -= tickets; cout<<"Cancelled "<<tickets<<" Rush tickets.\n"; }
                        else cout<<"Invalid cancellation amount!\n";
                        break;
                    default:
                        cout<<"Invalid movie choice!\n";
                        break;
                }
                break;

            // VIEW BOOKINGS
            case 3:
                cout<<"\n------------------- CURRENT BOOKINGS -------------------\n";
                cout<<"F1:The Movie       - "<<f1_t<<" tickets\n";
                cout<<"Ford Vs Ferrari    - "<<ff_t<<" tickets\n";
                cout<<"Rush               - "<<r_t<<" tickets\n";
                cout<<"--------------------------------------------------------\n";
                break;

            // CHECKOUT
            case 4:
            {
                int total_tickets = f1_t + ff_t + r_t;
                float total_price = (f1_t * f1) + (ff_t * ff) + (r_t * r);

                if(total_tickets == 0){
                    cout<<"No tickets booked! Exiting...\n";
                    break;
                }

                float discount = 0;

                // Group discount
                if(total_tickets >= 5){
                    discount += group_discount;
                    cout<<"Group booking discount applied (10%)\n";
                }

                // Membership discount
                cout<<"Do you have a membership card? (y/n): ";
                cin>>membership;
                if(membership == 'y' || membership == 'Y'){
                    discount += member_discount;
                    cout<<" Membership discount applied (5%)\n";
                }

                // Apply discounts
                float discounted_price = total_price - (total_price * discount);

                // Apply GST
                float final_bill = discounted_price + (discounted_price * gst);

                cout<<"\n-------------------- BILL SUMMARY --------------------\n";
                cout<<"Tickets Booked: "<<total_tickets<<endl;
                cout<<"Base Amount: Rs "<<total_price<<endl;
                cout<<"Discount Applied: "<<discount*100<<"%"<<endl;
                cout<<"Amount After Discount: Rs "<<discounted_price<<endl;
                cout<<"GST (18%): Rs "<<discounted_price * gst<<endl;
                cout<<"---------------------------------------------\n";
                cout<<"Total Payable: Rs "<<final_bill<<endl;
                cout<<"------------------------------------------------------\n";
                cout<<" Thank You for Visiting One8 Movies! Enjoy the Show \n";
                break;
            }

            default:
                cout<<"Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}
