// *************************************************************
// BBTC 1113 - Programming Concept and Design

// Student Name     : Yaashiniy A/P M Segaran
// Student ID       : BIT20230901011
// Title of Project : White Market
// **************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <windows.h> //for sleep 
using namespace std;

void menu();

class ManageMenu{
	
	    
	public:
		  ManageMenu() {
        system("\n\n\n\n\n color F0"); // F=bright white which is backround, 0-black for the word
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t W   H   I   T   E      M   A   R   K   E   T" << endl;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        Sleep(5000);
        system("CLS");
        menu(); // call to main function to load after executing the constructor
        }
    
     void changeTerminalColor() {
        // 
        system("color 0B"); // 0-black, B-cyan
    }

    ~ManageMenu() {} // destructor
};

 void menu() {
 }


// Function declarations/prototypes (defining functions)
void displayCategories();
void processMedicineOrder(double& delivery, double& medicineCost); // variables in function is known as parameters or arguments
void processDefenseToolsOrder(double& delivery, double& defenseToolsCost);
void processTreasurerLondonOrder(double& delivery, double& treasurerLondonCost);
void collectContactInformation(string& name, int& contactNum, string& email, string& address, int& age, string& date);



int main()
{
    string name[1000], email, address[1000], date [1000] ;
    int age, contactNum, category;
    double medicineCost, defenseToolsCost, treasurerLondonCost,shipping, delivery;
    int typeofmed, typeofTools, typeofItem, quantity;
    
    ManageMenu admin;
    admin.changeTerminalColor();
    
    
    // Display categories
    do
{
	
    displayCategories(); // calling code- part of program where function is called
                        //              - is a 'main' function where displayCategories is invoked, so when the program runs,
                        //                it starts executing from the 'main' function
                        //              - when it sees displayCategories, it jumps to 'the displaycategories' function, execute its code,
                        //                and return to  the calling code.
    
    cout << " " << endl;
    cout << "Enter the category (1/2/3): ";
    cin >> category;

    system("cls");

    switch (category)
    {
    case 1:
        processMedicineOrder(delivery, medicineCost);
        break;

    case 2:
        processDefenseToolsOrder(delivery, defenseToolsCost);
        break;

    case 3:
        processTreasurerLondonOrder(delivery, treasurerLondonCost);
        break;
        
    case 0:
        cout<< "Exiting the program. Thank you." << endl;

    default:
        cout << "Invalid category choice." << endl;
        cout << " " << endl;
        break;
    }
    
    char addMore;
        cout << "Do you want to add more items? (y/n): ";
        cin >> addMore;
        system ("cls");

        if (addMore != 'y' && addMore != 'Y')
        {
            break; // Exit the loop if the user doesn't want to add more items
        }

} while (true);


    return 0;
}

// Function to display categories
void displayCategories()
{
	int age;
	
	cout << "Enter your age        : ";
    cin >> age;
    cout << " " << endl;
     if (age >= 21) {
        cout << "   " << endl;
        cout << " Congratulations! You're old enough to access the system." << endl; 
        cout << " " << endl; 
        cout << " Please wait while you are redirected to the White Market." << endl; 
        cout << " " << endl;
        cout << " " << endl;
		system("pause");
        
         } else {
        cout << " Oops! We suggest you go age a bit more, like a fine wine and return when you're 21 or older." << endl;
        cout << " See you in few more years.. " << endl;
        system("pause");
        exit(0); // Terminate the program
        
    }
     
    system ("cls");
    
    cout<< setprecision (2) << fixed ;
    cout << "                                                      W   H   I   T   E       M   A   R   K   E   T                                                        " << endl;
    cout << "__________________________________________________________________________________________________________________________________________________________ " << endl;
    cout << "*                                                                                                                                                         *" << endl;
    cout << "*                                                                                                                                                         *" << endl;
    cout << "*                                                              YOUR LEGAL WHITE MARKET                                                                    *" << endl;
    cout << "*                                                                   White is black                                                                        *" << endl;
    cout << "*                                                                SHOP AT YOUR OWN RISK                                                                    *" << endl;
    cout << "*                                                                                                                                                         *" << endl;
    cout << "*                                                                    Categories                                                                           *" << endl;
    cout << "*                                                                                                                                                         *" << endl;
    cout << "*                                                                   1: Medicines                                                                          *" << endl;
    cout << "*                                                                   2: Personal safety tools                                                              *" << endl;
    cout << "*                                                                   3: Tobacco                                                                            *" << endl;
    cout << "*                                                                                                                                                         *" << endl;
    cout << "__________________________________________________________________________________________________________________________________________________________ " << endl;
    cout << " " << endl;
    
}

// Medicine order processing code...
// Function to process medicine order
void processMedicineOrder(double& delivery, double& medicineCost)
{
	string name, email, address, payment, date;
	int typeofmed, quantity, shipping, contactNum, age;
	
    
    cout << " " << endl;
    	 cout << " ----------------------------------------------------------------White Market Medicines---------------------------------------------------------------------"<< endl;
    	 cout << " " << endl;
		 cout << "         We specialize in sourcing, distributing, and delivering rare medicines that are often challenging to obtain through traditional channels.          " << endl;
    	 cout << " " << endl ;
    	 cout << " " << endl ;
    	 cout << "          ........................................     ........................................     ...................................... " << endl; 
    	 cout << "          .         1. Cimicifuga Racemosa       .     .        2. Hydrastis Canadensis       .     .       3. Santalum ellipticum       . " << endl;
    	 cout << "          .                                      .     .                                      .     .                                    . " << endl;
    	 cout << "          .  Arthritis, rheumatism, inflammatory .     .      Skin infections, congestion,    .     .     Bodycare, skincare, natural    . " << endl;
    	 cout << "          .  symtomps and tinnitus.              .     .      support digestive system.       .     .     perfume, body tonic.           . " << endl;
    	 cout << "          .                                      .     .                                      .     .                                    . " << endl;
    	 cout << "          .                            ~RM 67.30 .     .                            ~RM 50.80 .     .                            ~RM 120 . " << endl;
    	 cout << "          ........................................     ........................................     ...................................... " << endl;
    	 cout << " " << endl;
    	 cout << " " << endl;
    	 
    	 cout << " Type of medicine (1/2/3): " ;
    	 cout << " " ;
    	 cin >> typeofmed;
    	 
    	 cout << " Quantity                : " ;
    	 cout << " " ;
    	 cin >> quantity;
    	 
    	 cout << " Shipping (Malaysia)     : RM 12 " << endl ;
		  
		 shipping = 12;
    	 
    	 int purchaseMedicine;
    	 
    	 if(typeofmed == 1) {
    	 	
    	 	medicineCost = quantity * 67.30;
    	 	delivery = medicineCost + shipping ;
    	 	
    	 	cout << " " << endl;
    	    cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
		    }
		    
		 if(typeofmed == 2) {
		 	
		 	medicineCost = quantity * 50.80;
		 	delivery = medicineCost + shipping;
		 	
		 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
    	 	
		 }
		 
		  if(typeofmed == 3) {
		 	
		 	medicineCost = quantity * 120;
		 	delivery = medicineCost + shipping;
		 	
		 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(1500);
    	 }
    
    cout << " Loading....." << endl;
    Sleep(3500);
    system ("cls");
    
    	 
    cout << "                                                              Contact Informations                                                                       "<< endl;
    cout << " " << endl;
    cout << " " << endl;
                                                            
    cout << "Enter your Full Name  : ";
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, name);
    cout << " " << endl;
    
    cout << "Contact Number        : " ;
    cin >> contactNum;
    cout << " " << endl;
    
    cout << "Email address         : " ;
    cin >> email;
    cout << " " << endl;
    
    cout << "Full Shipping Address : " ;
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, address);
    cout << " " << endl;
    
    cout << "Date : ";
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, date);
    cout << " " << endl;
    cout << " " << endl;
    
    cout << "Please wait, your invoice is being processed and don't forget to save it." << endl;
    cout << " ........." << endl;
    
		
		 //  file "white market customers.txt"
        ofstream out("C:\\Users\\Yaashiniy Segaran\\Desktop\\White market customers.txt", ios::app);

        out << "Name: " << name << endl;
        out << "Contact Number: " << contactNum << endl;
        out << "Email: " << email << endl;
        out << "Address: " << address << endl;
        out << "Date: " << date << endl;
        out << "------------------------\n";
        out.close();  // Close the file when done
    
	Sleep (3300);    
    system ("cls");
    
       
    cout << "                   -------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                              WHITE MARKET INVOICE                                              " << endl;
    cout << "                   -------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                   Name   : " << name <<  endl;
    cout << "                   Address: " << address << endl; 
    cout << "                   Email  : " << email << endl;
     cout << "                  Date   : " << date << endl;
    cout << "                                                                                                                                " << endl;
    cout << "                                                        Amount   : " << medicineCost << endl;   
	cout << "                                                        Shipping : RM 12                                                         " << endl;
	cout << "                                                        Total    : RM " << delivery << endl ;         
	cout << "                                                                                                                                "<< endl;
	cout << "                                                                                                                                " << endl;
	cout << "                   _____________________________________________________________________________________________________________" << endl;
	cout << "                                Deliveries of ordered items are scheduled for one week after the date of purchase.              " << endl;
	cout << "                                 Your personal information are confidential and will retain for future purposes.                " << endl;
	cout << "                   _____________________________________________________________________________________________________________" << endl;
	cout << "                                                                                                                                " << endl;
	cout << "                                                                                                                                " << endl;

     
    	 
}

//  defense tools order processing code...
// Function to process defense tools order
void processDefenseToolsOrder(double& delivery, double& defenseToolsCost)
{
    string name, email, address, payment, date;
	int typeofTools, quantity,shipping, age, contactNum;
	
	
    cout << " " << endl;
    	 cout << " ----------------------------------------------------------White Market Self-Defense Tools---------------------------------------------------------------"<< endl;
    	 cout << " " << endl;
		 cout << "                  We offers a curated selection of rare self-defense tools that are not commonly found in traditional retail outlets.                        " << endl;
    	 cout << " " << endl ;
    	 cout << " " << endl ;
    	 cout << "          ........................................     ........................................     ...................................... " << endl; 
    	 cout << "          .            1. TASER Pulse+           .     .      2. Hot Shot Tactical Axe        .     .  3. Reapr Meridus Full Tang Sword  . " << endl;
    	 cout << "          .                                      .     .                                      .     .                                    . " << endl;
    	 cout << "          .  Catridges(2), batteries,conductive  .     .    - 1075 high carbon steel,         .     .     - 420 stainless steel          . " << endl;
    	 cout << "          .  target(1), 15 foot shooting         .     .    - Heat treated to Rockwell(4)     .     .     - 29 inches blade length       . " << endl;
         cout << "          .  distance, temporarily overides an   .     .    - 7.75 inch blade                 .     .     - Nylon reinforced molded      . " << endl;
         cout << "          .  attacker's central nervous system,  .     .    - 16 inch total length            .     .       handle                       . " << endl;
         cout << "          .  limiting muscular control for 30    .     .    - Colour: Black                   .     .     - Lanyard handle hold          . " << endl;
         cout << "          .  seconds.                            .     .                                      .     .     - Shaffield brand              . " << endl;
    	 cout << "          .                                      .     .                                      .     .                                    . " << endl;
    	 cout << "          .                              ~RM 120 .     .                               ~RM 67 .     .                         ~RM 146.20 . " << endl;
    	 cout << "          ........................................     ........................................     ...................................... " << endl;
    	 cout << " " << endl;
    	 cout << " " << endl;
    	 
         cout << " Type of Self-Defense Tools (1/2/3): " ;
         cout << " " ;
    	 cin >> typeofTools;
    	 
    	 cout << " Quantity                          : " ;
    	 cout << " " ;
    	 cin >> quantity;
    	 
    	 cout << " Shipping (Malaysia)               : RM 12 " << endl ;
    	 cout << " " << endl;
		  
		 shipping = 12;
    	 
    	 int purchaseDefenseTools;
    	 
    	 if(typeofTools == 1) {
    	 	
    	 	defenseToolsCost = quantity * 120;
    	 	
    	 	delivery = defenseToolsCost + shipping ;
    	 	
    	 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
    	 	
		    }
		    
		 if(typeofTools == 2) {
		 	
		 	defenseToolsCost = quantity * 67;
		 	delivery = defenseToolsCost + shipping;
		 	
		 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
    	 	
		 }
		 
		  if(typeofTools == 3) {
		 	
		 	defenseToolsCost = quantity * 146.20;
		 	delivery = defenseToolsCost + shipping;
		 	
		 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
          }
          
          cout << " Loading....." << endl;
          Sleep(5500);
          system ("cls");
          
    cout << "                                                              Contact Informations                                                                       "<< endl;
    cout << " " << endl;
    cout << " " << endl;
                                                            
    cout << "Enter your Full Name  : " ;
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, name);
    cout << " " << endl;
        
    cout << "Contact Number        : " ;
    cin >> contactNum;
    cout << " " << endl;
    
    cout << "Email address         : " ;
    cin >> email;
    cout << " " << endl;
    
    cout << "Full Shipping Address : " ;
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, address);
    cout << " " << endl;
    cout << " " << endl;
    
    cout << "Date : ";
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, date);
    cout << " " << endl;
    cout << " " << endl;
    
    cout << "Please wait, your invoice is being processed and don't forget to save it." << endl;
    cout << " ........." << endl;
    

		
		 //  file "white market customers.txt"
        ofstream out("C:\\Users\\Yaashiniy Segaran\\Desktop\\White market customers.txt", ios::app);

        out << "Name: " << name << endl;
        out << "Contact Number: " << contactNum << endl;
        out << "Email: " << email << endl;
        out << "Address: " << address << endl;
        out << "Date: " << date << endl;
        out << "------------------------\n";
        out.close();  // Close the file when done
           
    
    Sleep (5500);
    system ("cls");
    
       
    cout << "                   -------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                              WHITE MARKET INVOICE                                              " << endl;
    cout << "                   -------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                   Name   : " << name <<  endl;
    cout << "                   Address: " << address << endl; 
    cout << "                   Email  : " << email << endl;
    cout << "                   Date   : " << date << endl;
    cout << "                                                                                                                                " << endl;
    cout << "                                                        Amount   : " << defenseToolsCost << endl;   
	cout << "                                                        Shipping : RM 12                                                         " << endl;
	cout << "                                                        Total    : RM " << delivery << endl ;         
	cout << "                                                                                                                                " << endl;
	cout << "                                                                                                                                " << endl;
	cout << "                   _____________________________________________________________________________________________________________" << endl;
	cout << "                                Deliveries of ordered items are scheduled for one week after the date of purchase.              " << endl;
	cout << "                                 Your personal information are confidential and will retain for future purposes.                " << endl;
	cout << "                   _____________________________________________________________________________________________________________" << endl;
	cout << "                                                                                                                                " << endl;
	cout << "                                                                                                                                " << endl;
    	 
		 
}

// Function to process Treasurer London order
void processTreasurerLondonOrder(double& delivery, double& treasurerLondonCost)
{
	string name, email, address, payment, treasurerLondon, date;
	int typeofItem, quantity, contactNum, age; 
	double shipping, totalTreasurerLondon ;
	
    // Treasurer London order processing code...
         
         cout << " " << endl;
    	 cout << " --------------------------------------------------------White Market Treasurer London--------------------------------------------------------------"<< endl;
    	 cout << " " << endl;
		 cout << "         We specialize in sourcing, distributing, and delivering rare medicines that are often challenging to obtain through traditional channels.  " << endl;
    	 cout << " " << endl ;
    	 cout << " " << endl ;
    	 cout << "          ........................................     ........................................     ......................................... " << endl; 
    	 cout << "          .      1. Treasurer Luxury Black       .     .  2. Treasurer London Aluminium Black .     .  3. Porsche Design Jet Lighter P'3642 . " << endl;
    	 cout << "          .                                      .     .                                      .     .                                       . " << endl;
    	 cout << "          .    - 20x90mm premium cigarettes.     .     .      - 20x90mm premium cigarettes    .     .     - Special closed mechanism        . " << endl;
    	 cout << "          .    - Made in England                 .     .      - Made in England               .     .       emitting a fine, consistent     . " << endl;
    	 cout << "          .    - Cardboard Pack                  .     .      - Gold Tipping Foil             .     .       flame.                          . " << endl;
    	 cout << "          .    - Special bland of Virginia       .     .      - Virginia Tobacco              .     .     - Cap is designed to protect the  . " << endl;
    	 cout << "          .      Tobacco.                        .     .                                      .     .       inlet from dust.                . " << endl;
    	 cout << "          .                                      .     .                                      .     .     - Tank capacity: 1.0 gram         . " << endl;
    	 cout << "          .                                      .     .                                      .     .     - Black, Silver, Grey, Gold       . " << endl;
    	 cout << "          .                                      .     .                                      .     .                                       . " << endl;
    	 cout << "          .                         ~RM 498/pack .     .                      ~RM 563.50/pack .     .                               ~RM 850 . " << endl;
    	 cout << "          ........................................     ........................................     ......................................... " << endl;
    	 cout << " " << endl;
    	 cout << " " << endl;
    	 
        cout << " Type of item (1/2/3): " ;
         cout << " " ;
    	 cin >> typeofItem;
    	 
    	 cout << " Quantity            : " ;
    	 cout << " " ;
    	 cin >> quantity;
    	 
    	 cout << " Shipping (Malaysia) : RM 12 " << endl ;
    	 cout << " " << endl;
		  
		shipping = 12; // RM 12 from the total 
    	 
    	 int purchaseTreasurerLondon;
 	
    	 
    	 if(typeofItem == 1) {
    	 	
    	 	
    	 	
    	 	treasurerLondonCost = quantity * 498;
    	 	
    	 	delivery = treasurerLondonCost + shipping ;
    	 	
    	 	
    	 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << "including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
		    }
		    
		 if(typeofItem == 2) {
		 	
		 	treasurerLondonCost = quantity * 563.50;
		 	delivery = treasurerLondonCost + shipping;
		 	
		 	cout << " " << endl;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
    	 	
		 }
		 
		  if(typeofItem == 3) {
		 	
		 	treasurerLondonCost = quantity * 850;
		 	delivery = treasurerLondonCost + shipping;
		 	
		 	cout << " " << endl ;
    	 	cout << " Your purchase will cost RM " << delivery << " including delivery cost." << endl;
    	 	cout << " " << endl ;
    	 	
    	 	Sleep(3500);
    	 	
          }
          
          cout << " Loading....." << endl;
          Sleep (5500);
          system ("cls");
          
    	  	
    	  
    cout << "                                                              Contact Informations                                                                       "<< endl;
    cout << " " << endl;
    cout << " " << endl;
     
	                                                       
    cout << "Enter your Full Name  : " ;
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, name);
    cout << " " << endl;
    
    cout << "Contact Number        : " ;
    cin >> contactNum;
    cout << " " << endl;
    
    cout << "Email address         : " ;
    cin >> email;
    cout << " " << endl;
    
    cout << "Full Shipping Address : " ;
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, address);
    cout << " " << endl;
    
    cout << "Date : ";
    cin.ignore(); // Ignore any leftover newline characters in the buffer
    getline(cin, date);
    cout << " " << endl;
    cout << " " << endl;
    
    cout << "Please wait, your invoice is being processed and don't forget to save it." << endl;
    cout << " ........." << endl;

		
		 //  file "white market customers.txt"
        ofstream out("C:\\Users\\Yaashiniy Segaran\\Desktop\\White market customers.txt", ios::app);

        out << "Name          : " << name << endl;
        out << "Contact Number: " << contactNum << endl;
        out << "Email         : " << email << endl;
        out << "Address       : " << address << endl;
        out << "Date          : " << date << endl;
        out << "------------------------\n";
        out.close();  // Close the file when done
           
    Sleep (5500);
    system ("cls");

    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    cout << "                   -------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                              WHITE MARKET INVOICE                                              " << endl;
    cout << "                   -------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                   Name: " << name <<  endl;
    cout << "                   Address: " << address << endl; 
    cout << "                   Email: " << email << endl;
    cout << "                   Date: " << date << endl;
    cout << "                                                                                                                                " << endl;
    cout << "                                                        Amount   : RM " << treasurerLondonCost << endl;   
	cout << "                                                        Shipping : RM 12                                                         " << endl;
	cout << "                                                        Total    : RM " << delivery << endl ;         
	cout << "                                                                                                                                "<< endl;
	cout << "                                                                                                                                " << endl;
	cout << "                   _____________________________________________________________________________________________________________" << endl;
	cout << "                                Deliveries of ordered items are scheduled for one week after the date of purchase.              " << endl;
	cout << "                                 Your personal information are confidential and will retain for future purposes.                " << endl;
	cout << "                   _____________________________________________________________________________________________________________" << endl;
	cout << "                                                                                                                                " << endl;
	cout << "                                                                                                                                " << endl;

}




    	 	


