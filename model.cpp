#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string version = "24";
    string filename = "model.dmp";

    // open file
    std::ifstream myfile;
    myfile.open(filename);
    std::string mystring;

    // get old version
    if (myfile.is_open())
    {
        getline(myfile, mystring);
        cout << "old: " << mystring << '\n';
        mystring.replace(10, 2, version);
    }
    else
    {
        cout << "cannot find " << filename;
        return 1;
    }

    // write
    ofstream out;
    out.open("model2.dmp");
    out << mystring << '\n';
    cout << "new: " << mystring << '\n';
    while (getline(myfile, mystring))
    {
        out << mystring << '\n';
    }

    // close file
    out.close();
    myfile.close();

    // closing Lines
    cout << "done";
    getchar();

    return 0;
}