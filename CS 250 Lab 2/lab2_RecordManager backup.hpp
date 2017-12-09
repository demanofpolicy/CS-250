#ifndef _RECORD_MANAGER_HPP
#define _RECORD_MANAGER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "lab2_RecordManager.hpp"

using namespace std;

class RecordManager
{
    public:

    RecordManager::RecordManager()
    {
        for (int i = 0; i < MAX_FILE; i++)
        {
            if( m_output[i].is_open())
            {
                m_output[i]
            }
        }
    }

    void OpenOutputFile( string filename );
    void CloseOutputFile( string filename );
    void WriteToFile( string filename, string text );
    void DisplayAllOpenFiles();

    private:
    int FindAvailableFile();
    int FindFilenameIndex( string filename );

    ofstream m_outputs[5];
    string m_filenames[5];
    const int MAX_FILES = 5;
};

#.endif
