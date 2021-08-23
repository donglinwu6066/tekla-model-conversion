// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    std::ifstream myfile;
    myfile.open("model2.dmp");
    std::string mystring;

    // provide some content
    if (myfile.is_open())
    {
        for (int i = 0; i < 20; i++)
        {
            getline(myfile, mystring);
            cout << mystring << '\n';
        }
    }

    myfile.close();

    // closing Lines
    cout << "done\n";
    getchar();

    return 0;
}
