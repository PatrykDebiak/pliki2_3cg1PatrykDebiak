#include <iostream>
#include <fstream>



using namespace std;

int main()
{
    fstream plik;
    string x;
    ofstream myfile;
    plik.open("hasla.txt", ios::in);
    myfile.open("passwords.txt", ios::app);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik >> x;
            int dl = x.length();
            
            if (dl >= 8){
                if (x.find('$') || x.find('#') || x.find('*')) {
                    myfile<<x<<"\n";
                }
                else {
                    break;
                }
            }


        }
        myfile.close();
        plik.close();


    }
}
