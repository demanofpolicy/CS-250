#ifndef _function1
#define _function1


int AddThree( int a, int b, int c )
{
    return a + b + b;
}

/* Add a test to this function */
void Test_AddThree()
{
    cout << "************ Test_AddThree ************" << endl;

    int input1, input2, input3;
    int expectedOutput;
    int actualOutput;

    /* TEST 1 ********************************************/
    input1 = 0; input2 = 0; input3 = 0;
    expectedOutput = -1;

    actualOutput = AddThree( input1, input2, input3 );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_AddThree: Test 1 passed!" << endl;
    }
    else
    {
        cout << "Test_AddThree: Test 1 FAILED!" << endl;
    }

    /* TEST 2 ********************************************/
    // CREATE YOUR OWN TEST
    input1 = 2;             // change me
    input2 = 2;             // change me
    input3 = 2;             // change me
    expectedOutput = 6;    // change me


    // Run test (keep this as-is):
    actualOutput = AddThree( input1, input2, input3 );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_AddThree: Test 2 passed!" << endl;
    }
    else
    {
        cout << "Test_AddThree: Test 2 FAILED!" << endl;
    }

    /* TEST 3 ********************************************/
    // CREATE YOUR OWN TEST
    input1 = 3;             // change me
    input2 = 3;             // change me
    input3 = 3;             // change me
    expectedOutput = 9;    // change me


    // Run test (keep this as-is):
    actualOutput = AddThree( input1, input2, input3 );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_AddThree: Test 3 passed!" << endl;
    }
    else
    {
        cout << "Test_AddThree: Test 3 FAILED!" << endl;
    }
}

#endif
