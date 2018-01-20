#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void user_register(string user_login, string user_password)
{
    ofstream users_var("users//" + user_login);

    users_var << user_login;
    users_var << "\n";
    users_var << user_password;

    users_var.close();
    cout << "YES";
}

void user_log_in(string user_login, string user_password)
{
    char true_login[50];
    char true_password[50];

    ifstream read_file_users("users//" + user_login);

    read_file_users.getline(true_login, 50);
    read_file_users.getline(true_password, 50);

    read_file_users.close();

    if (user_login == true_login && user_password == true_password){
        cout << "all right!" << endl;
    }


    //cout << "text>" << user_login << "" << user_password << "<text" << endl;

}

int main()
{
    setlocale(LC_ALL, "rus");
    char user_login[50];
    char user_password[50];

    int choice;
    cout << "hello, 1)register 2)login" << endl;
    cin >> choice;
    if (choice == '1' || choice == 1){
        system("clear");
        cout << "New login>>>";
        cin >> user_login;
        cout << "New password>>>";
        cin >> user_password;
        user_register(user_login, user_password);
    }
    else {
        cout << "Login";
        cin >> user_login;
        cout << "Password";
        cin >> user_password;
        user_log_in(user_login, user_password);
    }
    return 0;
}
