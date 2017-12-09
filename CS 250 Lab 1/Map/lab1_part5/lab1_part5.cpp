#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map< string, string > colors;
    colors[ "red" ] = "FF0000";
    colors[ "green" ] = "FF0000";
    colors[ "blue" ] = "FF0000";
    colors[ "magenta" ] = "FF0000";
    colors[ "yellow" ] = "FF0000";
    colors[ "cyan" ] = "FF0000";

    cout << "Hex: " << colors[ color ] << endl;

    while ( true )
    {
        string color;
        cout << endl << "Enter a color, or QUIT to stop: ";
        cin >> color;

        if( color == "QUIT")
        {
            break;
        }
        cout << colors[color] << endl;

    }
    return 0;
}
