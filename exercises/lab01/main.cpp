//
//  main.cpp
//  DriverLicenseLab
//
//  Created by esma yildirim on 2/1/23.
//

#include <iostream>
#include "DriverLicense.h"
#include "Date.h"
#include <array>
#include <string>
using namespace std;


void test1()
{
    // insert code here...
    try{
    DriverLicense license{"234054322", "Esma", "Yildirim","20006 45th ave", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "F"};
    
    DriverLicense l2{"12345", "John", "Doe", "221 Baker St", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }try{
    DriverLicense l3{"12345678e", "John", "Doe", "221 Baker St", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }try{
    DriverLicense l4{"123456789", "John", "Doe", "221 Baker St", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }
    try{
    DriverLicense l6{"123456789", "John", "Doe", "221 Baker St", Date(9,31,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }
    try{
    DriverLicense l7{"234054322", "Esma", "Yildirim","20006 45th ave", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "T1", "BROWN", "F"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }
    try{
        DriverLicense l8{"234054322", "Esma", "Yildirim","20006 45th ave", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "C"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }

}

int main(int argc, const char * argv[]) {
    // test1();
    
    array<DriverLicense, 2> licenses;

    licenses[0] = DriverLicense("123456789", "John", "Doe", "221 Baker St", Date(9,10,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M");
    licenses[1] = DriverLicense("111111111", "Jim", "Doe", "221 Baker St", Date(9,10,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M");
    

    cout << "Licenses: \n";
    // for loop to go through each license, displaying each info with toString
    for (int i = 0; i < 2; i++){
        cout << licenses[i].toString() << endl;   
    }

    string id_check;
    // while loop to check if 'quit' has been entered
        while (id_check != "quit"){
            cout << "ID (Type quit to exit the program)? ";
            cin >> id_check;
            if (id_check == "quit"){
                break;
            }

            bool found_id = false;

            for (int i = 0; i < 2; i++){
                DriverLicense currLicense = licenses[i];

                if ( id_check == currLicense.getID() ){
                    found_id = true;
                    string option_num;
                    while(option_num != "-1"){
                        cout << "Enter option number (-1 to stop): " << endl;
                        cout << "1 for address change" << endl;
                        cout << "2 for name change" << endl;
                        cout << "3 for license renewal" << endl;
                        cin >> option_num;

                        if (option_num == "-1"){
                            break;
                        } else if (option_num == "1"){
                            string newAddr;
                            cout << "Enter address: ";
                            cin.ignore(); // ignores the last inputted newline char from option_num
                            getline(cin, newAddr);

                            currLicense.setAddress(newAddr);
                            cout << "After change: " << endl;
                            cout << currLicense.toString();

                        } else if (option_num == "2"){
                            string newFName, newLName;
                            cout << "Enter firstname and lastname: ";
                            cin >> newFName >> newLName;

                            currLicense.setFirstName(newFName);
                            currLicense.setLastName(newLName);


                            cout << "After change: " << endl;
                            cout << currLicense.toString();
                            
                        } else if (option_num == "3"){
                            unsigned int newIMonth, newIDay, newIYear, newEMonth, newEDay, newEYear;
                            // enter new values for both issue and expiration date, have try blocks for each creation
                            cout << "Enter issue date (MM DD YYYY): ";
                            cin >> newIMonth >> newIDay >> newIYear;

                            cout << "Enter expiration date (MM DD YYYY): ";
                            cin >> newEMonth >> newEDay >> newEYear;

                            try
                            {
                                Date newIDate{newIMonth, newIDay, newIYear};
                                currLicense.setIssueDate(newIDate);

                                Date newEDate{newEMonth, newEDay, newEYear};
                                currLicense.setExpDate(newEDate);

                                cout << "After change: " << endl;
                                cout << currLicense.toString();
                            }
                            catch(const std::exception& e)
                            {
                                cout << e.what() << '\n';
                                cout << "Try again. \n";
                            }
                            

                        } else {
                            cout << "Invalid choice. Try again." << endl;
                        }
                    }
                }   
            }

            if (!found_id){
                cout << "ID not found. Try Again.\n";
            }
        }
        //inner while loop to check if -1 has been inputted for an option (could be switch statement)
        // have try catch blocks when user inputs invalid option (date)
     
    return 0;
}
