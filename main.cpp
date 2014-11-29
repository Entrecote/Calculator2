#include <iostream>
#include <string>
using namespace std;



int main()
{
    cout << "#############################################" << endl;
    cout << "###      Calculator Super Nova v. 0,5     ###" << endl;
    cout << "###         Made in Iceland 2014          ###" << endl;
    cout << "###   Copyright: Entrecote @github.com    ###" << endl;
    cout << "###     contact: antstepet@gmail.com      ###" << endl;
    cout << "#############################################" << endl;
    cout << "\n\n";
    cout << "This is private area!\n" << endl;
    cout << "Please log in" << endl;

    string username;
    string password;
    int values;
    string dothis;
    string sum;


    do
            {
                if (username != password && password != username )
                    {
                    cout << "Wrong username or passsword, try this: \n USERNAME: dovy \n PASSWORD: flottur \n";
                    }
                cout << "Username: ";
                getline(cin, username, '\n');

                cout << "Password: ";
                getline(cin, password, '\n');



            }  while ( username != "dovy" && password != "flottur");
                cout << "Welcome Dovydas, you'r logged in now\n";

        cout << "Please log in" << endl;

        cout << "How many value do you need to calculate?" << endl;
        cout << "Select middle 2 - unlimited" << endl;
        cin >> values;


        for ( int i = 0; i < values; i++ )
 {
        cout << "What is your " << i << " value?\n";
        cin >> i;
        int newresult = i;
        int keepresult = newresult;
        cout << keepresult << endl;
        cout << "Prees - for Minus\n";
        cout << "Prees + for Plus\n";
        cout << "Prees * for for *\n\n";
        cin >> dothis;
        cout << "Result for now is" << keepresult << dothis << "\n\n";




 }










        cout << 4 + 4 + 8 * 7 + 5 * 4 << endl;




    return 0;
}
