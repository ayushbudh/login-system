#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isLoggedIn(){

  string username,password, uName, pass;

  cout << "Enter username: ";
  cin >> username;
  cout << "Enter password: ";
  cin >> password;

  ifstream read("data\\"+username+".txt");
  getline(read,uName);
  getline(read,pass);

  if(uName==username && pass==password){
    return true;
  }else{
    return false;
  }
}

int main() {
  int choice;

  cout<<"\n1. Register\n2. Login\nYour choice: ";
  cin >> choice;

  if(choice == 1){
    string username, password;

    cout << "select a username: ";
    cin >> username;
    cout << "select a password: ";
    cin >> password;

    ofstream file;
    file("data\\"+ username + ".txt");
    file << username << endl << password;
    file.close();

    main();

  }else if(choice==2){
    bool status = isLoggedIn();
     if(!status){
    cout << "False Login!" << endl;
    system("PAUSE");
    return 0;
  }else{
    cout<< "Successfully logged in!" << endl;
    system("PAUSE");
    return 1;
  }
  }
  
 
}
