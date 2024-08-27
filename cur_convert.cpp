#include <iostream>
using namespace std;
int new_option;
void cur_converter(){

    cout << "Available options for currency conversion are:" << endl;
    cout << "1. Convert to USD" << endl;
    cout << "2. Convert to Euro" << endl;
    cout << "3. Convert to Japanese Yen" << endl;
    cout<< "4. Convert to British pound" <<endl;
    cout<< "5.Convert to Peso" <<endl;
    cout<< "6. Convert to Doller" <<endl;
    cout<< "7.Convert to yen"<<endl;
    cout << "\n";

    int option;
    cout << "Your option: ";
    cin >> option;
    float inr;
    switch(option)
    {
        case 1:

            cout << "Enter the INR amount to convert into USD: ";
            cin >> inr;
            inr *= 0.012;
            cout << "The converted USD amount is = " << inr << endl;

            cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
            cout << "Your option: ";
            cin >> new_option;
            if (new_option == 1){
                    cur_converter();
            }
    break;

     case 2:
         cout << "\nEnter the INR amount to convert into EUR: ";
         cin >> inr;
         inr *= 0.011;
         cout << "The converted EUR amount: " << inr << endl;

        cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
        cout << "Your option: ";
        cin >> new_option;
        if (new_option == 1){
                cur_converter();
        }
        break;

         case 3:
             cout << "\nEnter the INR amount to convert into JPY: ";
             cin >> inr;
             inr *= 1.61;
             cout << "The converted JPY amount: " << inr << endl;

      cout << "Do you want to convert to a new currency??\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
      cout << "Your option: ";
      cin >> new_option;
      if (new_option == 1){
                    cur_converter();
            }
break;

         case 4:
             cout << "\nEnter the INR amount to convert into British pound: ";
             cin >> inr;
             inr *= 0.0090;
             cout << "The converted British pound amount is = " << inr << endl;

            cout << "Do you want to convert to a new currency??\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
      cout << "Your option: ";
      cin >> new_option;
      if (new_option == 1){
                    cur_converter();
            }
break;

         case 5:
             cout << "\nEnter the INR amount to convert into peso: ";
             cin >> inr;
             inr *= 0.67;
             cout << "The converted peso amount is = " << inr << endl;

             cout << "Do you want to convert to a new currency??\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
      cout << "Your option: ";
      cin >> new_option;
      if (new_option == 1){
                    cur_converter();
            }
break;
         case 6:
             cout << "\nEnter the INR amount to convert into Doller: ";
             cin >> inr;
             inr *= 0.012;
             cout << "The converted Doller amount is = " << inr << endl;

            cout << "Do you want to convert to a new currency??\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
      cout << "Your option: ";
      cin >> new_option;
      if (new_option == 1){
                    cur_converter();
            }
break;
         case 7:
             cout << "\nEnter the INR amount to convert into Yen: ";
             cin >> inr;
             inr *= 1.75;
             cout << "The converted yen amount is = " << inr << endl;


        cout << "Do you want to convert to a new currency??\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
        cout << "Your option: ";
        cin >> new_option;
        if (new_option == 1){
                    cur_converter();
            }
break;
}
}
int main()

{

    cur_converter();

    cout << "Thank you!";

    return 0;

}

