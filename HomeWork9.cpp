#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{

    char buf[256];
    ifstream myFile;
    ofstream exeFile;

    myFile.open(argv[0],ios_base::binary);
    exeFile.open("C:\\File\\1.exe",ios_base::binary);

    while(1)
    {

        myFile.read(buf,sizeof(buf));
        if(myFile.eof())break;
        exeFile.write(buf, sizeof(buf));

    }

    myFile.close();
    exeFile.close();

    cout << "hello, world" << endl;



    return 0;
}
