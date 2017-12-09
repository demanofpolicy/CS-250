#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    float balance = 0.0;
    queue<float> transactions;

    transactions.push( 100.42 );
    transactions.push( -5.58 );
    transactions.push (50.78);
    transactions.push(-20.50);

    while ( transactions.empty() == false )
    {

        transactions.front();
        cout << transactions.front()<< " pushed to account " << endl;
        balance += transactions.front();
        cout << "balance:" << balance << endl;
        transactions.pop();
    }

    cout << "Final balance: $" << balance << endl;
    return 0;
}
