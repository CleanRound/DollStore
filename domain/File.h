#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int mystrlen(string str)
{
    int i = 0;
    int counter = 0;
    while (str[i] != '\0')
    {
        counter++;
        i++;
    }
    return counter;
}

struct File
{
    fstream file;
    string path;

    File()
    {
        this->path = "file.txt";
    }
    File(string path)
    {
        this->path = path;
    }
    void CloseFile() {
        this->file.close();
    }
    bool isEmpty()
    {
        string buf;
        if (Read(buf))
        {
            return (buf.empty()) ? true : false;
        }
        else
        {
            return true;
        }
    }
    ~File() = default;
};
