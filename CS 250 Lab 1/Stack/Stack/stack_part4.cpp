#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    bool done = false;
    cout << "Enter the next:word of the sentence or UNDO to or DONEto stop." <<endl;

    stack<float> sentence;

    while (!done)
    {
        string word;
        cout << ">>";
        cin >> word;

        if (word == "UNDO")
        {
            cout << "Removed" << sentence.top() << " Popped from stack\n";
            sentence.pop;
        }
        else if (word == "DONE")
        {
            std :: cout << sentence.push();
        }
        else
        {

        }
        while (!sentence.empty())
        {
            std:: cout << sentence.top();
            sentence.pop();

        }

    }
    cout << endl <<endl << "Finished sentence: " ;
    return 0;
}

