#include <iostream>
#include <string>
using namespace std;
//Some func to calculating
int pl (int sum, int v ) { return  v + sum;}
int mi (int sum, int v ) { return v - sum;}
int ma (int sum, int v ) { return v * sum;}

//The main
int main()
{
//Strings, Int etc...

        string username;
        string password;
        int values = 0;
        string dothis;
        int sum = 0;
        int result =0;
        int v = 0;

//Startup Window
        cout << "#############################################" << endl;
        cout << "###      Calculator Super Nova v. 0,5     ###" << endl;
        cout << "###         Made in Iceland 2014          ###" << endl;
        cout << "###   Copyright: Entrecote @github.com    ###" << endl;
        cout << "###     contact: antstepet@gmail.com      ###" << endl;
        cout << "#############################################" << endl;
        cout << "###       This is Private calculator       ##" << endl;
        cout << "#############################################" << endl;
        cout << "###            Please log in              ###" << endl;
        cout << "#############################################" << endl;
//Login Area
        do
            {
                if (username != "" && password != "" )
                    {
                    //If wrong username or password, error pop up.
                        cout << "#############################################" << endl;
                        cout << "###   Error: Wrong username OR password   ###" << endl;
                        cout << "#############################################" << endl;
                        cout << "###             Please try again          ###" << endl;
                        cout << "#############################################" << endl;
                        cout << "###       May can this account works      ###" << endl;
                        cout << "###    USERNAME: dovy  PASSWORD: master   ###" << endl;
                        cout << "#############################################" << endl;
                    }
                        cout << " \tUsername: ";
                            getline(cin, username, '\n');
                        cout << "\tPassword: ";
                            getline(cin, password, '\n');
            }
                //Greetings!
                while ( username != "dovy" && password != "master");
                        cout << "#############################################" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###       Welcome back, Dovydas           ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl;

                //So you want to calucating some stuff?
                        cout << "###                                       ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###        How many values do you         ###" << endl;
                        cout << "###          need to calculate?           ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###      Select middle 2 - unlimited      ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl;
                        // Select needed values
                        cout << "\t I need: ";
                        cin >> values;
                        //Going on
                        cout << "#############################################" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###        You selected " << values << " values          ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl;


                for ( int i = 0; i < values; i++ )
                    {

                        //cout << "\n\n" << result << "\n\n";
                        cout << "#############################################" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###       What is your " << i << " value?           ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl;
                        cout << "\t That will be: ";
                        cin >> v;
                        cout << "#############################################" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###       You selected: " << v << "                 ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###        Enter                          ###" << endl;
                        cout << "###           + for Plus                  ###" << endl;
                        cout << "###           - for Minus                 ###" << endl;
                        cout << "###           * for douple                ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl;
                        cout << "\t I want to: ";
                        cin >> dothis;
                        //Calculating...
                        int sum = result;
                            if      (dothis == "+")
                                {
                                    result = pl(sum,v);
                                }
                            else if (dothis == "-")
                                {
                                    result = mi(sum,v);
                                }
                            else if (dothis == "*")
                                {
                                result = ma(sum,v);
                                }
                                else    {

                        cout << "#############################################" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###        SOMETHING WENT WRONG           ###" << endl;
                        cout << "###     ONE OF YOUR VALUE WAS SKIPPED     ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl; }
                        //RESULTS
                        cout << "#############################################" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "###         Result for now                ###" << endl;
                        cout << "###           " << result << "                           ###" << endl;
                        cout << "###                                       ###" << endl;
                        cout << "#############################################" << endl;

        }


return 0;

 }

