#include "lab2_RecordManager.hpp"

#include <iostream>
using namespace std;

void Test1()
{
    cout << endl << "-------------------------------------" << endl;
    cout << "TEST 1: Open one file and write to it" << endl << endl;
    RecordManager record;
    record.OpenOutputFile( "Test1.txt" );
    try{

    record.DisplayAllOpenFiles();

    record.WriteToFile( "Test1.txt", "Hello world!" );

    record.CloseOutputFile( "Test1.txt" );
    }
    catch ( runtime_error ){
        cout << "Error: "  << endl;
    }
    cout << endl << "END OF TEST 1" << endl;

}

void Test2()
{
    cout << endl << "-------------------------------------" << endl;
    cout << "TEST 2: Open 5 files and write to them" << endl << endl;
    RecordManager record;
    record.OpenOutputFile( "Test2_A.txt" );
    record.OpenOutputFile( "Test2_B.txt" );
    record.OpenOutputFile( "Test2_C.txt" );
    record.OpenOutputFile( "Test2_D.txt" );
    record.OpenOutputFile( "Test2_E.txt" );

    record.DisplayAllOpenFiles();

    record.WriteToFile( "Test2_A.txt", "ABCDE" );
    record.WriteToFile( "Test2_B.txt", "FGHIJ" );
    record.WriteToFile( "Test2_C.txt", "KLMNO" );
    record.WriteToFile( "Test2_D.txt", "PQRST" );
    record.WriteToFile( "Test2_E.txt", "UVWXYZ" );

    record.CloseOutputFile( "Test2_A.txt" );
    record.CloseOutputFile( "Test2_B.txt" );
    record.CloseOutputFile( "Test2_C.txt" );
    record.CloseOutputFile( "Test2_D.txt" );
    record.CloseOutputFile( "Test2_E.txt" );

    cout << endl << "END OF TEST 2" << endl;
}

void Test3()
{
    cout << endl << "-------------------------------------" << endl;
    cout << "TEST 3: Write to a file that isn't opened" << endl << endl;
    RecordManager record;

    record.DisplayAllOpenFiles();

    record.WriteToFile( "Test2.txt", "How are you?" );

    cout << endl << "END OF TEST 3" << endl;
}

void Test4()
{
    cout << endl << "-------------------------------------" << endl;
    cout << "TEST 4: Close a file that isn't opened" << endl << endl;
    RecordManager record;

    record.DisplayAllOpenFiles();

    record.CloseOutputFile( "Test3.txt" );

    cout << endl << "END OF TEST 4" << endl;
}

void Test5()
{
    cout << endl << "-------------------------------------" << endl;
    cout << "TEST 5: Try to open more than max # of files" << endl << endl;
    RecordManager record;

    record.OpenOutputFile( "Test5_A.txt" );
    record.OpenOutputFile( "Test5_B.txt" );
    record.OpenOutputFile( "Test5_C.txt" );
    record.OpenOutputFile( "Test5_D.txt" );
    record.OpenOutputFile( "Test5_E.txt" );
    record.OpenOutputFile( "Test4_F.txt" ); // too many

    record.DisplayAllOpenFiles();

    cout << endl << "END OF TEST 5" << endl;
}

int main()
{
    Test1();
    Test2();
    Test3();
    Test4();
    Test5();


    return 0;
}
