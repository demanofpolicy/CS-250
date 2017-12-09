#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int RunTrial( int min, int max, int stopAtFirst, int trialCount )
{
    int diff = ( max + 1 - min);
    int n = rand() % diff + min;

    cout << n << " ";

    if ( n == stopAtFirst )
    {
        return trialCount;
    }

    return RunTrial ( min, max, stopAtFirst, trialCount + 1);
}
int main ()
{
    srand ( time ( NULL ));
    int min, max, stopAtFirst, count;

    cout << "Minimum value :";
    cin >> min;

    cout << "Maximum value :";
    cin >> max;

    cout << "stopAtFirst :";
    cin >> stopAtFirst;

    cout << "How many times to run:";
    cin >> count;

    int totalTrials = 0;

    for( int i = 0; i < count; i++)
    {

        cout << endl;
        cout << " Running trial set " << i << "... \t";
        int trials = RunTrial ( min, max, stopAtFirst, 1);
        totalTrials += trials;
        cout << "\t" << trials << " trials ran";

    }
    float averageTrials = float ( totalTrials)/ float ( count);
    cout << "Average trails ran: " << averageTrials << endl << endl;
    return 0;
}

