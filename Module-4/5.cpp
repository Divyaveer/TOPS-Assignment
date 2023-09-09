#include "onlineBanking.h"
using namespace std;

// Global Variables
vector<vector<string>> db;
vector<string> row;
string username;
int checking;

time_t dt = time(0);
char* t_stamp = ctime(&dt);

//Function Declaration
void landingPage();
void loginPage();
void customisedDashboardPage();
void changePassword();
void logout();
void customerDashboardPage();
void checkBalance(int, int);
void depositMoney(int*, int, int);
void withdrawMoney(int*, int, int);
void changeAddress(int, int);
void changeMobileNo(int, int);
void lastLoggedOn(int, int);
void dashboard();
void accountServices(int);
void back();
void registerPage();
void addAccount();
void forgotPassword();

//Function for Main
int main() {
    landingPage();

    return 0;
}

//Landing Page or Home Page
void landingPage() {
    int r=21, c=41, i, j, choice;

    system("cls");
    cout<<endl<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {   
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==17){
                cout<<"State Bank Of India ";
                j+=10;
            }

            if(i==4 && j==14){
                cout<<"Online Banking Customer Service ";
                j+=16;
            }

            if(i==7 && j==20){
                cout<<"Welcome ";
                j+=4;
            }

            if(i==0 && j==45){
                cout<<"HOME PAGE ";
                j+=5;
            }

            if(i==10 && j==3){
                cout<<"Press:----";
                j+=5;
            }

            if(i==11 && j==5){
                cout<<"1. Register ";
                j+=6;
            }

            if(i==12 && j==5){
                cout<<"2. Login";
                j+=4;
            }

            if(i==13 && j==5){
                cout<<"3. Forgot Password";
                j+=9;
            }

            if(i==14 && j==5){
                cout<<"4. Exit ";
                j+=4;
            }

            if(i==r-1 && j==48){
                cout<<t_stamp;
                j=c;
            }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                j+=21;
            }

            if(i==2 && j<c){
                cout<<"* ";
            }else if(i==6 && j<c){
                cout<<"* ";
            }else if(i==8 && j<c){
                cout<<"* ";
            }
            else if(i==18 && j<c){
                cout<<"* ";
            }
            else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                cout << "* ";
            else
                cout<<"  ";
        }
                cout << endl;
    }
    cout<<endl<<endl;

    cout<<"\t\t\tEnter your Choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            registerPage();
            break;
        case 2:
            loginPage();
            break;
        case 3:
            forgotPassword();
            break;
        case 4:
            exit(0);
            break;
        default:
            system("cls");
            cout<<"\n\n\t\tInvalid Input!!! Try Again.....\n\n";
            landingPage();
    }
}

//Login Page
void loginPage() {
    string userid, password, temPass, line, word;
    int count,i;

    system("cls");
    
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter your User ID : ";
    cin>>userid;

    cout<<"\n\t\t\t\t\t\t\t\tEnter your Password : ";
    cin>>password;

    //----------------------------------------------------------------------------------------------
                                            //User id & Password Checking codes
    //----------------------------------------------------------------------------------------------
    ifstream read("database\\"+userid+".txt");
    
    if(read.is_open()){ //User id Check
        while(getline(read, line)){
            row.clear();

            istringstream iss;
            iss.clear();
            iss.str(line);

            while(iss >> word)
                row.push_back(word);
            db.push_back(row);
        }

        read.close();

        if(db[1][1] == password){
            username = userid;
            customisedDashboardPage();
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Password !!! Try Again.......\n\n";
            sleep(2);
            loginPage();
        }
    }
    else{
        //User Id doesn't Exist !!!!
        system("cls");
        cout<<"\n\n\t\tThere is no User like "<<userid<<" !!! Try again......\n\n";
        sleep(5);
        landingPage();
    }
}

//Customised Dashboard Page
void customisedDashboardPage() {
    int choice;

    int r=11, c=41, i, j;

    system("cls");
    cout<<endl<<endl;
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==15){
                cout<<"Welcome "<<username<<" ";
                j+=9;
            }

            if(i==0 && j==28){
                cout<<" Customised Dashboard ";
                j+=11;
            }

            if(i==4 && j==4){
                cout<<"Press:----";
                j+=5;
            }

            if(i==5 && j==6){
                cout<<"1. Customer Dashboard ";
                j+=11;
            }

            if(i==6 && j==6){
                cout<<"2. Add another Account";
                j+=11;    
            }

            if(i==7 && j==6){
                cout<<"3. Change Password";
                j+=9;
            }

            if(i==8 && j==6){
                cout<<"4. Logout ";
                j+=5;
            }

            if(i==r-1 && j==28){
                cout<<t_stamp;
                j=c;
            }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                j+=21;
            }

            if(i==2 && j<c)
                cout<<"* ";
            else if((i==1 && j==0) || (i==1 && j==c-1))
                cout<<"  ";
            else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                cout << "* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n\n\t\t\tEnter your Choice: ";
    cin>>choice;
    
    if(choice == 1){
        customerDashboardPage();
    }else if(choice == 2){
        addAccount();
    }else if(choice == 3){
        changePassword();
    }else if(choice == 4){
        logout();
    }else{
        system("cls");
        cout<<"\n\n\t\tWrong Input!!!! Try Again.....\n\n";
        sleep(5);
        customisedDashboardPage();
    }

    cout<<endl<<endl;
}

//Change Password Funtion
void changePassword() {
    string currentPass, checkPass1, newPass;

    system("cls");
    cout<<"\n\n\n\n\t\t\t\t\tEnter the Current Password : ";
    cin>>currentPass;

    if(db[1][1] == currentPass){
        while(1){
            system("cls");
            cout<<"\n\t\t\t\t\tEnter your New Password : ";
            cin>>checkPass1;

            cout<<"\n\t\t\t\t\tEnter your Password Again : ";
            cin>>newPass;

            if(checkPass1 != newPass){
                cout<<"\n\n\t\tMatching of Password Failed!! try Again.....\n\n";
                sleep(3);
                continue;
            }

            db[1][1] = newPass;

            system("cls");
            cout<<"\n\n\t\tPassword Has been successfully changed !!!!\n\n";
            sleep(3);

            //Updating Database
            ofstream file("database\\"+username+".txt", ios::trunc);

            for(int i=0; i<db.size(); i++){
                for(int j=0; j<db[i].size(); j++){
                    file<<db[i][j]<<" ";
                }
                file<<endl;
            }

            file.close();
            
            customisedDashboardPage();
            break;
        }
    }else{
        cout<<"\n\n\t\tWrong Password!!! Try again.......\n\n";
        sleep(3);
        customisedDashboardPage();
    }
}

//Logout Function
void logout() {
    cout<<"\n\n\t\tThanks for Visiting !!! See you very soon Mr. "<<username<<".........\n\n";

    ofstream write("database\\"+username+".txt", ios::trunc);

    if(checking == 1){
        for(int i=0; i < db.size(); i++){
            for(int j=0; j < db[i].size(); j++){
                write<<db[i][j]<<" ";
            }
            if(i!=4)
                write<<endl;
        }
    }else{
        for(int i=0; i < db.size(); i++){
            for(int j=0; j < db[i].size(); j++){
                write<<db[i][j]<<" ";
            }
            write<<endl;
        }
    }

    write.close();

    db.clear();
    sleep(5);
    main();
}

//Customer Dashboard Page
void customerDashboardPage() {
    string currAcc, ppfAcc;

    if(db[4].size() > 1){
        currAcc = "y";
    }
    
    if(db[5].size() > 1){
        ppfAcc = "y";
    }
        
    int r=12, c=41, i, j, choice;

    system("cls");
    cout<<endl<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {   
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==25){
                cout<<"Customer Dashboard";
                j+=9;
            }

            if(i==4 && j==4){
                cout<<"Press:----";
                j+=5;
            }

            if(i==5 && j==6){
                cout<<"1. View Savings Account ";
                j+=12;
            }

            if(i==6 && j==6){
                if(currAcc == "y"){
                    cout<<"2. View Current Account ";
                    j+=12;
                }else if(currAcc != "y" && ppfAcc == "y"){
                    cout<<"2. View Public Provided Fund Account";
                    j+=18;
                }else if(currAcc != "y" && ppfAcc != "y"){
                    cout<<"2. Logout ";
                    j+=5;
                }
            }

            if(i==7 && j==6){
                if(currAcc == "y" && ppfAcc == "y"){
                    cout<<"3. View Public Provided Fund Account";
                    j+=18;
                }else if(currAcc == "y" || ppfAcc == "y"){
                    cout<<"3. Logout ";
                    j+=5;
                }else{
                    cout<<"3. Back ";
                    j+=4;
                }
            }

            if(i==8 && j==6){
                if(currAcc == "y" && ppfAcc == "y"){
                    cout<<"4. Logout ";
                    j+=5;
                }else if(currAcc == "y" || ppfAcc == "y"){
                    cout<<"4. Back ";
                    j+=4;
                }
            }

            if(i==9 && j==6){
                if(currAcc == "y" && ppfAcc == "y"){
                    cout<<"5. Back ";
                    j+=4;
                }
            }

            if(i==r-1 && j==48){
                cout<<t_stamp;
                j=c;
            }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                j+=21;
            }

            if(i==2 && j<c)
                cout<<"* ";
            else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                cout << "* ";
            else
                cout<<"  ";
        }
                cout << endl;
    }
    cout<<endl<<endl;

    db[3][1] = db[3][4];

    if(currAcc == "y"){
        db[4][1] = db[4][4];
    }
    if(ppfAcc == "y"){
        db[4][1] = db[4][4];
    }

    db[3][2] = to_string(0);
    db[3][3] = to_string(0);

    if(currAcc == "y"){
        db[4][2] = to_string(0);
        db[4][3] = to_string(0);
    }
    if(ppfAcc == "y"){
        db[5][2] = to_string(0);
        db[5][3] = to_string(0);
    }

    cout<<"\t\t\tEnter your Choice : ";
    cin>>choice;

    if(choice == 1){
        accountServices(5);
    }else if(choice == 2) {
        if(currAcc == "y"){
            accountServices(10);
        }else if(currAcc != "y" && ppfAcc == "y"){
            accountServices(15);
        }else if(currAcc != "y" && ppfAcc != "y"){
            logout();
        }
    }else if(choice == 3){
        if(currAcc == "y" && ppfAcc == "y"){
            accountServices(15);
        }else if(currAcc == "y" || ppfAcc == "y"){
            logout();
        }else{
            back();
        }
    }else if(choice == 4){
        if(currAcc == "y" && ppfAcc == "y"){
            logout();
        }else if(currAcc == "y" || ppfAcc == "y"){
            back();
        }
    }else if(choice == 5){
        back();
    }else{
        system("cls");
        cout<<"\n\n\t\tWrong Input !!!! Try Again......\n\n";
        sleep(5);
        customerDashboardPage();
    }

}

void accountServices(int tacc){
    int r=15, c=41, i, j, choice, depositAmount=0, withdrawAmount=0;

    system("cls");
    cout<<endl<<endl;
    for(i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==30){
                cout<<"Services";
                j+=4;
            }

            if(i==4 && j==4){
                cout<<"Press:----";
                j+=5;
            }

            if(i==5 && j==6){
                cout<<"1. Check Avalable Balance ";
                j+=13;
            }

            if(i==6 && j==6){
                cout<<"2. Deposit Money";
                j+=8;
            }

            if(i==7 && j==6){
                cout<<"3. Withdraw Money ";
                j+=9;
            }

            if(i==8 && j==6){
                cout<<"4. Change City";
                j+=7;
            }

            if(i==9 && j==6){
                cout<<"5. Change Mobile No.";
                j+=10;
            }

            if(i==10 && j==6){
                cout<<"6. Last Logged on ";
                j+=9;
            }

            if(i==11 && j==6){
                cout<<"7. Dashboard";
                j+=6;
            }
            
            if(i==12 && j==6){
                cout<<"8. Logout ";
                j+=5;
            }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad)";
                j+=21;
            }

            if(i==2 && j<c)
                cout<<"* ";
            else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                cout << "* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"\t\t\tEnter your Choice : ";
    cin>>choice;

    if(tacc == 5){
        if(choice == 1){
            checkBalance(tacc, 3);
        }else if(choice == 2){
            depositMoney(&depositAmount, tacc, 3);
        }else if(choice == 3){
            withdrawMoney(&withdrawAmount, tacc, 3);
        }else if(choice == 4){
            changeAddress(tacc, 2);
        }else if(choice == 5){
            changeMobileNo(tacc, 2);
        }else if(choice == 6){
            lastLoggedOn(tacc, 2);
        }else if(choice == 7){
            dashboard();
        }else if(choice == 8){
            logout();
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Input !!! Try Again........\n\n";
            sleep(3);
            accountServices(tacc);
        }
    }else if(tacc == 10){
        if(choice == 1){
            checkBalance(tacc, 4);
        }else if(choice == 2){
            depositMoney(&depositAmount, tacc, 4);
        }else if(choice == 3){
            withdrawMoney(&withdrawAmount, tacc, 4);
        }else if(choice == 4){
            changeAddress(tacc, 2);
        }else if(choice == 5){
            changeMobileNo(tacc, 2);
        }else if(choice == 6){
            lastLoggedOn(tacc, 2);
        }else if(choice == 7){
            dashboard();
        }else if(choice == 8){
            logout();
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Input !!! Try Again........\n\n";
            sleep(3);
            accountServices(tacc);
        }
    }else if(tacc == 15){
        if(choice == 1){
            checkBalance( tacc, 5);
        }else if(choice == 2){
            depositMoney(&depositAmount, tacc, 5);
        }else if(choice == 3){
            withdrawMoney(&withdrawAmount, tacc, 5);
        }else if(choice == 4){
            changeAddress(tacc, 2);
        }else if(choice == 5){
            changeMobileNo(tacc, 2);
        }else if(choice == 6){
            lastLoggedOn(tacc, 2);
        }else if(choice == 7){
            dashboard();
        }else if(choice == 8){
            logout();
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Input !!! Try Again........\n\n";
            sleep(3);
            accountServices(tacc);
        }
    }

    cout<<endl<<endl;
}

void checkBalance(int tacc, int position) {
    system("cls");
    cout<<"\n\n\t\tCurrent Balance "<<db[position][4]<<"\n\n";
    getch();
    accountServices(tacc);
}

void depositMoney(int *depositAmount, int tacc, int position) {
    int balance;

    balance=stoi(db[position][4]);

    db[position][1] = to_string(balance);

    system("cls");

    cout<<"\n\n\n\n\t\t\t\t\tEnter the Deposit Amount : ";
    cin>>*depositAmount;

    cout<<"\n\t\t\t\t\tBefore Deposit Balance = "<<balance;

    balance += *depositAmount;

    cout<<"\n\t\t\t\t\tAfter Deposit Balance = "<<balance;

    db[position][4] = to_string(balance);

    accountServices(tacc);
}

void withdrawMoney(int *withdrawAmount, int tacc, int position) {
    int balance;

    balance=stoi(db[position][4]);

    db[position][1] = to_string(balance);

    system("cls");

    cout<<"\n\n\n\n\t\t\t\t\tEnter the Withdraw Amount : ";
    cin>>*withdrawAmount;

    if(*withdrawAmount > balance){
        system("cls");
        cout<<"\n\n\t\tYou Don't have that much Money in your Account\n\n";
        sleep(5);
        withdrawMoney(withdrawAmount, tacc, position);
    }

    cout<<"\n\t\t\t\t\tBefore Withdraw Balance = "<<balance;

    balance -= *withdrawAmount;

    cout<<"\n\t\t\t\t\tAfter Withdraw Balance = "<<balance;

    db[position][4] = to_string(balance);

    accountServices(tacc);
}

void changeAddress(int tacc, int position) {
    string newCity;

    system("cls");
    cout<<"\n\n\n\n\t\t\t\t\tEnter your New City Name : ";
    cin>>newCity;

    db[position][4] = newCity;

    system("cls");
    cout<<"\n\n\t\tCity Has been successfully Changed\n\n";
    getch();
    accountServices(tacc);
}

void changeMobileNo(int tacc, int position) {
    string newNumber;

    system("cls");
    cout<<"\n\n\n\t\t\t\t\tEnter your New Mobile Number : ";
    cin>>newNumber;

    db[position][5] = newNumber;

    system("cls");
    cout<<"\n\n\t\tMobile Number has been successfully Changed !!!!!!\n\n";
    getch();
    accountServices(tacc);
}

void lastLoggedOn(int tacc, int position) {
    system("cls");
    cout<<"\n\n\t\tLast Time you have been Logged on ";
    for(int j=6; j<db[position].size(); j++){
        cout<<db[position][j]<<" ";
    }
    cout<<"\n\n";
    getch();
    accountServices(tacc);
}

void dashboard() {
    customerDashboardPage();
}

void back() {
    customisedDashboardPage();
}

void registerPage() {
    string username, password, fname, lname, mobileNo, city, gender, hint;
    int age, userid=(rand() % (999999 - 100000 + 1)) + 100000;
    
    system("cls");
    
    cout<<"\n\n\n\n\t\t\t\t\tEnter your Username : ";
    cin>>username;

    ifstream check("database\\"+username+".txt");

    if(!check.is_open()){

        check.close();
        
        cout<<"\n\t\t\t\t\tEnter your Password : ";
        cin>>password;

        cout<<"\n\t\t\t\t\tEnter your Full Name : ";
        cin>>fname;

        cout<<"\n\t\t\t\t\tEnter your Last Name : ";
        cin>>lname;

        cout<<"\n\t\t\t\t\tEnter your Gender : ";
        cin>>gender;

        cout<<"\n\t\t\t\t\tEnter your Mobile Number : ";
        cin>>mobileNo;

        cout<<"\n\t\t\t\t\tEnter your City : ";
        cin>>city;

        cout<<"\n\t\t\t\t\tEnter your Age : ";
        cin>>age;

        cout<<"\n\t\t\t\t\tEnter your Hint for your Accout's Password Recovery : ";
        cin>>hint;

        int checkingUid;
        ifstream read("database\\userid.txt");

        while(1){
            read>>checkingUid;
            if(checkingUid == userid){
                userid=(rand() % (999999 - 100000 + 1)) + 100000;
            }else{
                break;
            }
        }

        fstream file("database\\"+username+".txt", ios::out);

        file<<t_stamp;
        file<<username<<" "<<password<<" "<<hint<<endl;
        file<<fname<<" "<<lname<<" "<<age<<" "<<gender<<" "<<city<<" "<<mobileNo<<" "<<t_stamp;
        file<<userid<<" 0 0 0 0 "<<t_stamp;
        file<<"CBAC"<<endl;
        file<<"PPFAC";

        file.close();

        ofstream write("database\\userid.txt", ios::app);

        write<<userid<<" ";

        write.close();

        system("cls");
        cout<<"\n\n\t\tAccount Has Been Successfully Created !!!\n\n";
        sleep(3);
        main();
    }else{
        system("cls");
        cout<<"\n\n\t\tWrong Input !! Try Again..........\n\n";
        sleep(3);
        registerPage();
    }
}

void addAccount() {
    checking=1;
    int choice;

    system("cls");
    if(db[4].size() > 1){
        cout<<"\n\n\n\n\t\tWhich Account do you want to Create : ----\n\t\t\tPress:---\n\t\t\t\t1. Public Provided Fund Account\n\t\t\t\t\tEnter your choice : ";
        cin>>choice;
    }else if(db[5].size() > 1){
        cout<<"\n\n\n\n\t\tWhich Account do you want to Create : ----\n\t\t\tPress:---\n\t\t\t\t1. Current Account\n\t\t\t\t\tEnter your choice : ";
        cin>>choice;
    }else if(db[4].size() == 1 && db[5].size() == 1){
        cout<<"\n\n\n\n\t\tWhich Account do you want to Create : ----\n\t\t\tPress:---\n\t\t\t\t1. Public Provided Fund Account\n\t\t\t\t2. Current Account\n\t\t\t\t\tEnter your choice : ";
        cin>>choice;
    }

    if(db[4].size() == 1 && db[5].size() > 1){
        if(choice == 1){
            int userid=(rand() % (100000 - 999999 + 1)) + 100000;
            string temp=to_string(userid), checkingUid;
            ifstream read("database\\userid.txt");
            while(1){
                read>>checkingUid;
                if(checkingUid == temp){
                    userid=(rand() % 999999);
                    temp=to_string(userid);
                }else{
                    break;
                }
            }

            read.close();

            ofstream write("database\\userid.txt", ios::app);

            write<<userid<<" ";

            write.close();
            
            int startingDeposit;
            row.clear();
            
            row.push_back(to_string(userid));   //Account No....

            cout<<"\n\n\t\tPlease Enter minimum 5000 for creating account : ";
            cin>>startingDeposit;

            if(startingDeposit < 5000){
                system("cls");
                cout<<"\n\n\t\tMinimum Amount for creating account is 5000!!!\n\n";
                sleep(3);
                addAccount();
            }

            row.push_back(to_string(0));
            row.push_back(to_string(startingDeposit));
            row.push_back(to_string(0));
            row.push_back(to_string(startingDeposit));
            row.push_back(t_stamp);

            db[4].clear();
            db[4]=row;
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Input !!! Try Again.....\n\n";
            sleep(3);
            addAccount();
        }
    }else if(db[5].size() == 1 && db[4].size() > 1){
        if(choice == 1){
            int userid=(rand() % (100000 - 999999 + 1)) + 100000;
            string temp=to_string(userid), checkingUid;
            ifstream read("database\\userid.txt");
            while(1){
                read>>checkingUid;
                if(checkingUid == temp){
                    userid=(rand() % 999999);
                    temp=to_string(userid);
                }else{
                    break;
                }
            }

            read.close();

            ofstream write("database\\userid.txt", ios::app);

            write<<userid<<" ";

            write.close();
            
            int startingDeposit;
            db[5].clear();
            
            db[5].push_back(to_string(userid));

            cout<<"\n\n\t\tPlease Enter minimum 5000 for creating account : ";
            cin>>startingDeposit;

            if(startingDeposit < 5000){
                system("cls");
                cout<<"\n\n\t\tMinimum Amount for creating account is 5000!!!\n\n";
                sleep(3);
                addAccount();
            }

            db[5].push_back(to_string(0));
            db[5].push_back(to_string(0));
            db[5].push_back(to_string(0));
            db[5].push_back(to_string(startingDeposit));
            db[5].push_back(t_stamp);
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Input !!! Try Again.....\n\n";
            sleep(3);
            addAccount();
        }
    }else if(db[4].size() == 1 && db[5].size() == 1){
        if(choice == 1){
            int userid=(rand() % (100000 - 999999 + 1)) + 100000;
            string temp=to_string(userid), checkingUid;
            ifstream read("database\\userid.txt");
            while(1){
                read>>checkingUid;
                if(checkingUid == temp){
                    userid=(rand() % 999999);
                    temp=to_string(userid);
                }else{
                    break;
                }
            }

            read.close();

            ofstream write("database\\userid.txt", ios::app);

            write<<userid<<" ";

            write.close();
            
            int startingDeposit;
            db[5].clear();
            
            db[5].push_back(to_string(userid));

            cout<<"\n\n\t\tPlease Enter minimum 5000 for creating account : ";
            cin>>startingDeposit;

            if(startingDeposit < 5000){
                system("cls");
                cout<<"\n\n\t\tMinimum Amount for creating account is 5000!!!\n\n";
                sleep(3);
                addAccount();
            }

            db[5].push_back(to_string(0));
            db[5].push_back(to_string(0));
            db[5].push_back(to_string(0));
            db[5].push_back(to_string(startingDeposit));
            db[5].push_back(t_stamp);
        }else if(choice == 2){
            int userid=(rand() % (100000 - 999999 + 1)) + 100000;
            string temp=to_string(userid), checkingUid;
            ifstream read("database\\userid.txt");
            while(1){
                read>>checkingUid;
                if(checkingUid == temp){
                    userid=(rand() % 999999);
                    temp=to_string(userid);
                }else{
                    break;
                }
            }

            read.close();

            ofstream write("database\\userid.txt", ios::app);

            write<<userid<<" ";

            write.close();
            
            int startingDeposit;
            db[4].clear();
            
            db[4].push_back(to_string(userid));

            cout<<"\n\n\t\tPlease Enter minimum 5000 for creating account : ";
            cin>>startingDeposit;

            if(startingDeposit < 5000){
                system("cls");
                cout<<"\n\n\t\tMinimum Amount for creating account is 5000!!!\n\n";
                sleep(3);
                addAccount();
            }

            db[4].push_back(to_string(0));
            db[4].push_back(to_string(0));
            db[4].push_back(to_string(0));
            db[4].push_back(to_string(startingDeposit));
            db[4].push_back(t_stamp);
        }else{
            system("cls");
            cout<<"\n\n\t\tWrong Input !!! Try Again.......\n\n";
            sleep(3);
            addAccount();
        }
    }else{
        system("cls");
        cout<<"\n\n\t\tSorry Sir, you can't add more Accounts\n\n";
        sleep(3);
        customisedDashboardPage();
    }

    ofstream file("database\\"+username+".txt", ios::trunc);

    for(int i=0; i<db.size(); i++){
        for(int j=0; j<db[i].size(); j++){
            file<<db[i][j]<<" ";
        }
        if(i != 4){
            file<<endl;
        }
    }

    file.close();

    customisedDashboardPage();
}

void forgotPassword() {
    string uid, checkingUid, hint, checkingHint, line, word;

    system("cls");
    cout<<"\n\n\n\t\t\t\t\tEnter your Username that you remembered : ";
    cin>>uid;

    ifstream file("database\\"+uid+".txt");

    if(file.is_open()){
        while(getline(file, line)){
            row.clear();

            istringstream iss;
            iss.clear();
            iss.str(line);

            while(iss >> word)
                row.push_back(word);
            db.push_back(row);
        }

        file.close();

        cout<<"\n\t\t\t\t\tEnter the hint of your account for password recovery : ";
        cin>>hint;

        if(db[1][2] == hint){
            system("cls");
            cout<<"\n\n\t\tPassword Found!!!\n\n";
            sleep(2);
            system("cls");
            cout<<"\n\n\t\tPassword = "<<db[1][1]<<"\n\n";
            sleep(5);
            main();
        }
    }else{
        system("cls");
        cout<<"\n\n\t\tNo User Exists Like "<<uid<<" !!! Try Again..........\n\n";
        sleep(3);
        main();
    }
}