#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
ifstream in("foo.txt", ios::in | ios::binary);


if(!in)
{
    cout << "Cannot open file";
    return 1;
}

ofstream out("foo2.txt", ios::out | ios::binary);
if(!out)
{
    cout << "Cannot open file";
    return 1;
}

string str;
char rep[80]; //replace array
int i;
i = 0;
while(in)
{
    i = getline(in,str);
    for(int i=0; i<80; i++)
    {
        if(str[i] == ',')
            rep[i] = ' ';
        else
            rep[i] = str[i];
        out.put(rep[i]);
    }
    out << endl;

}
in.close();
out.close();
return 0;
}