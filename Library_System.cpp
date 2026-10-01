#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <limits>
#include <iomanip>
using namespace std;

void user();
void admin();
void customer();
void Adminregistration();
void Customerregistration();
void Adminlogin();
void Customerlogin();
void Adminforgotpass();
void Customerforgotpass();
void adminmenu();
void customermenu();
void addbooks();
void viewbooks();
void updatebooks();
void deletebooks();
void updatebooks();
void SalesManagement();
void salesRecord();
void totalSales();
void logout();

int main(){
	user();	
}

void user(){
	int num;
	
	do{	
	system("cls");
	cout<<"\t\t\t\t\t\t *************************************************"<<endl;
	cout<<"\t\t\t\t\t\t/-------------------------------------------------\\"<<endl;
	cout<<"\t\t\t\t\t\t  (^_-)  WELCOME TO THE 'GENIUS BOOKS' BOOKSHOP  (-_^)  "<<endl;
	cout<<"\t\t\t\t\t\t\\-------------------------------------------------/"<<endl;
	cout<<"\t\t\t\t\t\t *************************************************\n\n";
	
	   cout<<"***************************************"<<endl;
	   cout<<"               USER MENU"<<endl;
	   cout<<"***************************************"<<endl;
       cout<<endl;
       cout<<"       |--------------------|"<<endl;
	   cout<<"       |       ADMIN        | => [1]"<<endl;
	   cout<<"       |--------------------|"<<endl;
	   cout<<"       |      CUSTOMER      | => [2]"<<endl;
	   cout<<"       |--------------------|"<<endl;
	   cout<<"       |        Exit        | => [3]"<<endl;
	   cout<<"       |--------------------|"<<endl;
	   cout<<endl;
       cout<<endl;
	
	   cout<<"=> ENTER YOUR CHOICE HERE : ";
	   cin>>num;

	    if(cin.fail()){
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    system("cls");
	    cout<<" "<<endl;
        cout<<"INVALID INPUT ! PLEASE ENTER A VALID NUMBER...."<<endl;
        cout<<endl;
        cout<<"PRESS ANY KEY TO GO BACK...";
        getch();
        continue;
        }
        system("cls");	      
	    
	       switch(num){
	       	
		       case 1:
			       system("cls");
			       admin();
			       break;
			       
		       case 2:
			       system("cls");
			       customer();
			       break;
			       
		       case 3:
			       system("cls");
			       cout<<"Thank You For Using Our System"<<endl;
			       break;
			       
		       default:
			       system("cls");
			       cout<<endl;
			       cout<<"INVALID SELECTION ! PLEASE CHOICE GIVEN NUMBERS"<<endl;
			       cout<<endl;
			       cout<<"PRESS ANY KEY TO GO BACK...";
                   getch();
			       break;      
	        }
    }
	while(num!=3);
}

void admin(){
	int num;
	do{
		system("cls");
		cout<<"\t\t\t\t\t\t *************************************************"<<endl;
		cout<<"\t\t\t\t\t\t/-------------------------------------------------\\"<<endl;
		cout<<"\t\t\t\t\t\t  (^_-)  WELCOME TO THE ADMIN LOGIN PAGE  (-_^)  "<<endl;
		cout<<"\t\t\t\t\t\t\\-------------------------------------------------/"<<endl;
		cout<<"\t\t\t\t\t\t *************************************************\n\n";
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t   |-----------------------------------|"<<endl;
		cout<<"\t\t\t\t\t\t   |               LOGIN               | => [1]"<<endl;
		cout<<"\t\t\t\t\t\t   |-----------------------------------|"<<endl;
        cout<<"\t\t\t\t\t\t   |              REGISTER             | => [2]"<<endl;
        cout<<"\t\t\t\t\t\t   |-----------------------------------|"<<endl;
		cout<<"\t\t\t\t\t\t   |          PASSWORD RECOVERY        | => [3]"<<endl;
		cout<<"\t\t\t\t\t\t   |-----------------------------------|"<<endl;
		cout<<"\t\t\t\t\t\t   |                EXIT               | => [4]"<<endl;
		cout<<"\t\t\t\t\t\t   |-----------------------------------|"<<endl;		
		cout<<endl;
		cout<<endl;
		
		cout<<"=> ENTER YOUR CHOICE HERE : ";
		cin>>num;
		system("cls");	
		
		if(cin.fail()){
	       cin.clear();
	       cin.ignore(numeric_limits<streamsize>::max(), '\n');
	       system("cls");
	       cout<<" "<<endl;
           cout<<"INVALID INPUT ! PLEASE ENTER A VALID NUMBER...."<<endl;
           cout<<endl;
           cout<<"PRESS ANY KEY TO GO BACK...";
           getch();
           continue;
        }
        system("cls");		

		switch(num){
			case 1:
				system("cls");
				Adminlogin();
				break;
			case 2:
				system("cls");
				Adminregistration();
				break;
			case 3:
				system("cls");
				Adminforgotpass();
				break;	
			case 4:
				system("cls");
				cout<<"Thankyou For Using Our System\n";
				cout<<"Good Bye\n";
				break;
			default:
			    system("cls");
				cout << "Invalid number! Please enter a valid number.\n\n";
				cout<<endl;
			    cout<<"PRESS ANY KEY TO GO BACK...";
                getch();
				admin();
				break;	
		}
	}
	while(num!=4);
 }

void customer(){
	int num;
	do{
		system("cls");
		cout<<"\t\t\t\t\t\t *************************************************"<<endl;
		cout<<"\t\t\t\t\t\t/-------------------------------------------------\\"<<endl;
		cout<<"\t\t\t\t\t\t  (^_-)  WELCOME TO THE CUSTOMER LOGIN PAGE  (-_^)  "<<endl;
		cout<<"\t\t\t\t\t\t\\-------------------------------------------------/"<<endl;
		cout<<"\t\t\t\t\t\t *************************************************\n\n";
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t     |-----------------------------------|"<<endl;
		cout<<"\t\t\t\t\t\t     |               LOGIN               | => [1]"<<endl;
		cout<<"\t\t\t\t\t\t     |-----------------------------------|"<<endl;
        cout<<"\t\t\t\t\t\t     |              REGISTER             | => [2]"<<endl;
        cout<<"\t\t\t\t\t\t     |-----------------------------------|"<<endl;
		cout<<"\t\t\t\t\t\t     |          PASSWORD RECOVERY        | => [3]"<<endl;
		cout<<"\t\t\t\t\t\t     |-----------------------------------|"<<endl;
		cout<<"\t\t\t\t\t\t     |                EXIT               | => [4]"<<endl;
		cout<<"\t\t\t\t\t\t     |-----------------------------------|"<<endl;		
		cout<<endl;
		cout<<endl;
		
		cout<<"Enter Your Choice : ";
		cin>>num;
		system("cls");
		
		if(cin.fail()){
	       cin.clear();
		   cin.ignore(numeric_limits<streamsize>::max(), '\n');
	       system("cls");
	       cout<<" "<<endl;
           cout<<"INVALID INPUT ! PLEASE ENTER A VALID NUMBER...."<<endl;
           cout<<endl;
           cout<<"PRESS ANY KEY TO GO BACK...";
           getch();
           continue;
        }
        system("cls");	

		switch(num){
			case 1:
				system("cls");
				Customerlogin();
				break;
			case 2:
				system("cls");
			    Customerregistration();
				break;
			case 3:
				system("cls");
				Customerforgotpass();
				break;	
			case 4:
				system("cls");
				cout<<"Thankyou For Using Our System\n";
				cout<<"Good Bye\n";
				break;
			default:
			       system("cls");
			       cout<<endl;
			       cout<<"INVALID SELECTION ! PLEASE CHOICE GIVEN NUMBERS"<<endl;
			       cout<<endl;
			       cout<<"PRESS ANY KEY TO GO BACK...";
                   getch();
			       break;
		}
	}
	while(num!=4);
 }

void Adminregistration(){
	
	 string fusername,fpassword;
	 
	 cout<<"Enter your username : ";
	 cin>>fusername;
	 cout<<"Enter your password : ";
	 cin>>fpassword;
	 
	 ofstream privacy("adminlogin.txt",ios::app);
	 privacy<<fusername<<" "<<fpassword<<endl;
	 system("cls");
	 cout<<"Registration is succesfull ! "<<endl;
	 cout<<"Press any key to continue ....."<<endl;
	 getch();
	 system("cls");
	 privacy.close();
}

void Customerregistration(){
	
	 string fusername,fpassword;
	 
	 cout<<"Enter your username : ";
	 cin>>fusername;
	 cout<<"Enter your password : ";
	 cin>>fpassword;
	 
	 ofstream privacy("customerlogin.txt",ios::app);
	 privacy<<fusername<<" "<<fpassword<<endl;
	 system("cls");
	 cout<<"Registration is succesfull ! "<<endl;
	 cout<<"Press any key to continue ....."<<endl;
	 getch();
	 system("cls");
	 privacy.close();
}

void Adminlogin(){
	
	int num;
	string iusername,ipassword;
	string fusername,fpassword;
	
	cout<<"Enter your username : ";
	cin>>iusername;
	cout<<"Enter your password : ";
	cin>>ipassword;
	
	ifstream privacy("adminlogin.txt");
	
	while(privacy>>fusername>>fpassword){
		if(iusername==fusername && ipassword==fpassword){
			num=1;
			break;
		}
	}
	privacy.close();
	
	if(num==1){
		system("cls");
		cout<<"login succesfull ! "<<endl;
		cout<<"Press any key to continue ....."<<endl;
		getch();
		system("cls");
		adminmenu();
		return;
	}
	else{
		system("cls");
		cout<<"login error ! please check your username and password "<<endl;

	}
}

void Customerlogin(){
	
	int num;
	string iusername,ipassword;
	string fusername,fpassword;
	
	cout<<"Enter your username : ";
	cin>>iusername;
	cout<<"Enter your password : ";
	cin>>ipassword;
	
	ifstream privacy("customerlogin.txt");
	
	while(privacy>>fusername>>fpassword){
		if(iusername==fusername && ipassword==fpassword){
			num=1;
			break;
		}
	}
	privacy.close();
	
	if(num==1){
		system("cls");
		cout<<"login succesfull ! "<<endl;
		cout<<"Press any key to continue...."<<endl;
		getch();
		system("cls");
		customermenu();
		return;

	}
	else{
		system("cls");
		cout<<"login error ! please check your username and password "<<endl;

	}
}

void Adminforgotpass(){

	string fusername,fpassword;
	string searchusername;
	
	do{
	cout<<"If you need to recover your password !\n";
	cout<<"please enter your username : ";
	cin>>searchusername;
	
	ifstream privacy("adminlogin.txt");
	if(!privacy.is_open()){
		cout<<"file opening error"<<endl;
		return ;
	}

	while(privacy>>fusername>>fpassword){
		if(fusername==searchusername){
		cout<<"Your password is : "<<fpassword<<endl;
		privacy.close();
		return;
    	}
	}
	privacy.close();
	system("cls");
	cout << "Username not found.Please try again\n";
    }
    while(true);
    return;
}

void Customerforgotpass(){

	string fusername,fpassword;
	string searchusername;
	
	do{
	cout<<"If you need to recover your password !\n";
	cout<<"please enter your username : ";
	cin>>searchusername;
	
	ifstream privacy("customerlogin.txt");
	if(!privacy.is_open()){
		cout<<"file opening error"<<endl;
		return ;
	}

	while(privacy>>fusername>>fpassword){
		if(fusername==searchusername){
		cout<<"Your password is : "<<fpassword<<endl;
		privacy.close();
		return;
    	}
	}
	privacy.close();
	system("cls");
	cout << "Username not found.Please try again\n";
    }
    while(true);
    return;
}

void viewbooks() {
    ifstream bookFile("books.txt");
    if (!bookFile) {
        cout << "Error! Unable to open books.txt file." << endl;
        return;
    }

    cout << "\t\t\t\t ======================" << endl;
    cout << "\t\t\t\t     AVAILABLE BOOKS" << endl;
    cout << "\t\t\t\t ======================" << endl << endl;

    string line, data[6];

    cout << left << setw(10) << "Book ID"
         << setw(25) << "Title"
         << setw(20) << "Author"
         << setw(15) << "Genre"
         << setw(10) << "Pages"
         << setw(10) << "Price" << endl;

    cout << string(90, '-') << endl;

    while (getline(bookFile, line)) {
        size_t pos = 0;
        int field = 0;

        while ((pos = line.find(',')) != string::npos && field < 5) {
            data[field++] = line.substr(0, pos);
            line.erase(0, pos + 1);
        }
        data[field] = line;

        cout << left << setw(10) << data[0]
             << setw(25) << data[1]
             << setw(20) << data[2]
             << setw(15) << data[3]
             << setw(10) << data[4]
             << setw(10) << data[5] << endl;
    }

    bookFile.close();

    cout << "\nPress any key to continue....." << endl;
    getch();
    system("cls");
}

void addbooks(){
	
	char choice;
	int x;
	
	do{
	   string ftitle,fauthor,fgenre;
	   int fpages;
	   double fbookId,fprice;
	   
	   cin.ignore();
	   cout<<"Enter the book title : ";
	   getline(cin,ftitle);
	   cout<<"Enter the author's name : ";
	   getline(cin,fauthor);
	   cout<<"genre of the book : ";
	   getline(cin,fgenre);
	   cout<<"Number of pages : ";
	   cin>>fpages;
	   cout<<"price of book : ";
	   cin>>fprice;
	   cout<<"Enter the book ID : ";
	   cin>>fbookId;
	   
	   ofstream books("books.txt",ios::app);
	     if(books.is_open()){
	     	books<<fbookId<<","<<ftitle<<","<<fauthor<<","<<fgenre<<","<<fpages<<","<<fprice<<endl;
	     	books.close();
	     	system("cls");
	     	cout<<"book added successfully !"<<endl;
		 }
		 else{
		 	cerr<<"file opening error....!"<<endl;
		 }
		cout<<"Do you want to add another book ? (y,n) ";
	    cin>>choice;
    }
    while(choice=='Y'||choice=='y');
      system("cls");
      adminmenu();
}

void adminmenu(){
	
	int num;
	
	do{
		system("cls");
	    cout<<"\t\t\t\t___________________STAFF MENU___________________\n\n\n";
		cout<<"\t\t\t\t\t|       Company Details       |=>[1]"<<endl;
		cout<<"\t\t\t\t\t| View Available Book Details |=>[2]"<<endl;
		cout<<"\t\t\t\t\t|          Add Books          |=>[3]"<<endl;
		cout<<"\t\t\t\t\t|        Update Books         |=>[4]"<<endl;
		cout<<"\t\t\t\t\t|        Delete Books         |=>[5]"<<endl;
		cout<<"\t\t\t\t\t|    Manage Sales Details     |=>[6]"<<endl;
		cout<<"\t\t\t\t\t|      Back To User Menu      |=>[7]"<<endl;
		cout<<"\t\t\t\t\t|            Exit             |=>[8]\n\n"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>num;
		
		if(cin.fail()){
	      	cin.clear();
	      	
	      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	      	system("cls");
            cout << "Invalid input! Please enter a valid number.\n\n";
            cout<<"press any key to go back...";
            getch();
            system("cls");
	    }
		
		switch(num){
			case 1:
				system("cls");
				cout<<"**************************************************************"<<endl;
				cout<<"                      COMPANY DETAILS"<<endl;
				cout<<"**************************************************************"<<endl;
				cout<<"Address: No.27 Book Street, Knowladge City."<<endl;
				cout<<"Phone: 07559725440"<<endl;
				cout<<"Email: guruprashathprashath2004@gmail.com"<<endl;
				cout<<"Hours: Mon-Fri 8.30am-8.15pm"<<endl<<endl;
				cout<<"About Us:"<<endl;
				cout<<"Genius Books has been serving the community since 1995."<<endl;
				cout<<"providing a wide selection of books for all ages and interests."<<endl;
				cout<<"Our knowledgeable staff can help you find exactly what you're."<<endl;
				cout<<"Looking for or recommend something new to discover."<<endl<<endl;
				cout<<"PRESS ANY KEY TO GO BACK...";
                getch();
				break;
			case 2:
				system("cls");
				viewbooks();
				break;
			case 3:
				system("cls");
				addbooks();
				break;
			case 4:
				system("cls");
				updatebooks();
				break;
			case 5:
				system("cls");
				deletebooks();
				break;
			case 6:
				system("cls");
				SalesManagement();
				break;
			case 7:
				system("cls");
				user();
				break;
			case 8:
				system("cls");
				cout<<"Thankyou for your support "<<endl;
				cout<<"Have a nice day !"<<endl;
				break;	
			default:
				system("cls");
				cout<<"Invalid choice ! please enter given numbers";
				cout<<endl;
			    cout<<"PRESS ANY KEY TO GO BACK...";
                getch();
				break;
		}
	}
	while(num!=8);
}

void customermenu(){
	
	int num;
	do{
	    system("cls");
		cout<<"\t\t\t\t_________________CUSTOMER MENU_________________\n\n\n";
		cout<<"\t\t\t\t    |       Company Details       |=>[1]"<<endl;
		cout<<"\t\t\t\t    | View Available Book Details |=>[2]"<<endl;
		cout<<"\t\t\t\t    |      Back To User Menu      |=>[3]"<<endl;
		cout<<"\t\t\t\t    |             Exit            |=>[4]\n\n"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>num;
		
		if(cin.fail()){
	       cin.clear();
		   cin.ignore(numeric_limits<streamsize>::max(), '\n');
	       system("cls");
	       cout<<" "<<endl;
           cout<<"INVALID INPUT! PLEASE ENTER A VALID NUMBER...."<<endl;
           cout<<endl;
           cout<<"PRESS ANY KEY TO GO BACK...";
           getch();
           continue;
        }
		
		switch(num){
			case 1:
				system("cls");
				cout<<"**************************************************************"<<endl;
				cout<<"                      COMPANY DETAILS"<<endl;
				cout<<"**************************************************************"<<endl;
				cout<<"Address: No.27 Book Street, Knowladge City."<<endl;
				cout<<"Phone: 07559725440"<<endl;
				cout<<"Email: guruprashathprashath2004@gmail.com"<<endl;
				cout<<"Hours: Mon-Fri 8.30am-8.15pm"<<endl<<endl;
				cout<<"About Us:"<<endl;
				cout<<"Genius Books has been serving the community since 1995."<<endl;
				cout<<"providing a wide selection of books for all ages and interests."<<endl;
				cout<<"Our knowledgeable staff can help you find exactly what you're."<<endl;
				cout<<"Looking for or recommend something new to discover."<<endl<<endl;
				cout<<"PRESS ANY KEY TO GO BACK...";
                getch();
				break;
			case 2:
				system("cls");
				viewbooks();
				cout<<"PRESS ANY KEY TO GO BACK...";
                getch();
				break;
			case 3:
				system("cls");
				user();
				break;
			case 4:
				system("cls");
				cout<<"Thankyou for your support "<<endl;
				cout<<"Have a nice day !"<<endl;
				break;
			default:
				system("cls");
				cout<<"Invalid choice ! please enter given numbers"<<endl;
				cout<<endl;
			    cout<<"PRESS ANY KEY TO GO BACK...";
                getch();
				break;
				
		}
	}
	while(num!=4);
}

void deletebooks(){
    string deleteID;
    bool found = false;

    cout << "Enter the Book ID you want to delete: ";
    cin >> deleteID;

    ifstream inFile("books.txt");
    ofstream outFile("temp.txt");

    if (!inFile || !outFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        string currentID = line.substr(0, line.find(','));
        if (currentID != deleteID) {
            outFile << line << endl;
        } else {
            found = true;
        }
    }

    inFile.close();
    outFile.close();

    remove("books.txt");
    rename("temp.txt", "books.txt");

    if (found) {
        cout << "Book with ID " << deleteID << " deleted successfully!" << endl;
    } else {
        cout << "Book with ID " << deleteID << " not found." << endl;
    }

    cout << "Press any key to return to menu...";
    getch();
    system("cls");
    adminmenu();
}

void updatebooks(){
    string bookID, line;
    bool found = false;
    cout << "Enter the Book ID to update: ";
    cin >> bookID;

    ifstream inFile("books.txt");
    ofstream tempFile("temp.txt");

    if (!inFile || !tempFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    while (getline(inFile, line)) {
        stringstream ss(line);
        string data[6];
        for (int i = 0; i < 6; ++i) {
            getline(ss, data[i], ',');
        }

        if (data[0] == bookID) {
            found = true;
            cout << "\nBook found! Current details:\n";
            cout << "Book ID: " << data[0] << endl;
            cout << "Title: " << data[1] << endl;
            cout << "Author: " << data[2] << endl;
            cout << "Genre: " << data[3] << endl;
            cout << "Pages: " << data[4] << endl;
            cout << "Price: " << data[5] << endl;

            cout << "\nEnter new details (press Enter to keep current value):\n";
            cin.ignore();

            string input;

            cout << "New Title: ";
            getline(cin, input);
            if (!input.empty()) data[1] = input;

            cout << "New Author: ";
            getline(cin, input);
            if (!input.empty()) data[2] = input;

            cout << "New Genre: ";
            getline(cin, input);
            if (!input.empty()) data[3] = input;

            cout << "New Pages: ";
            getline(cin, input);
            if (!input.empty()) data[4] = input;

            cout << "New Price: ";
            getline(cin, input);
            if (!input.empty()) data[5] = input;

            tempFile << data[0] << "," << data[1] << "," << data[2] << "," << data[3]
                     << "," << data[4] << "," << data[5] << endl;
        } else {
            tempFile << line << endl;
        }
    }

    inFile.close();
    tempFile.close();

    remove("books.txt");
    rename("temp.txt", "books.txt");

    if (found) {
        cout << "\nBook details updated successfully!" << endl;
    } else {
        cout << "\nBook with ID " << bookID << " not found." << endl;
    }

    cout << "\nPress any key to return to the menu...";
    getch();
    system("cls");
    adminmenu();
}

void SalesManagement(){
    int choice;
    do {
        system("cls");
        cout << "\t\t\t\t************* SALES MANAGEMENT *************\n";
        cout << "\t\t\t\t| 1. Record a Sale                       |\n";
        cout << "\t\t\t\t| 2. View All Sales                      |\n";
        cout << "\t\t\t\t| 3. Go Back to Staff Menu              |\n";
        cout << "\t\t\t\t*******************************************\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                salesRecord();
                break;
            case 2:
                totalSales();
                break;
            case 3:
                return;
            default:
                cout << "Invalid choice. Try again.\n";
                getch();
        }
    } while (choice != 3);
}

void salesRecord(){
    string bookID, line;
    int quantity;
    bool found = false;
    string title;
    double price;

    cout << "Enter Book ID to sell: ";
    cin >> bookID;

    ifstream bookFile("books.txt");
    if (!bookFile.is_open()) {
        cout << "Failed to open books.txt!\n";
        return;
    }

    while (getline(bookFile, line)) {
        stringstream ss(line);
        string data[6];
        for (int i = 0; i < 6; ++i) {
            getline(ss, data[i], ',');
        }

        if (data[0] == bookID) {
            title = data[1];
            price = stod(data[5]);
            found = true;
            break;
        }
    }
    bookFile.close();

    if (!found) {
        cout << "Book ID not found.\n";
        getch();
        return;
    }

    cout << "Book Found: " << title << " | Price: " << price << endl;
    cout << "Enter quantity sold: ";
    cin >> quantity;

    double total = price * quantity;

    ofstream saleFile("sales.txt", ios::app);
    saleFile << bookID << "," << title << "," << quantity << "," << price << "," << total << endl;
    saleFile.close();

    cout << "Sale recorded successfully! Total = " << total << endl;
    cout << "Press any key to return to Sales Menu...";
    getch();
}

void totalSales(){
    ifstream saleFile("sales.txt");
    if (!saleFile.is_open()) {
        cout << "Failed to open sales.txt!\n";
        return;
    }

    string line, data[5];
    cout << "\n\t\tSALES RECORDS\n";
    cout << left << setw(10) << "Book ID"
         << setw(25) << "Title"
         << setw(10) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;
    cout << string(65, '-') << endl;

    while (getline(saleFile, line)) {
        stringstream ss(line);
        for (int i = 0; i < 5; ++i) {
            getline(ss, data[i], ',');
        }

        cout << left << setw(10) << data[0]
             << setw(25) << data[1]
             << setw(10) << data[2]
             << setw(10) << data[3]
             << setw(10) << data[4] << endl;
    }

    saleFile.close();
    cout << "\nPress any key go back...";
    getch();
}

void logout(){
	user();
}
