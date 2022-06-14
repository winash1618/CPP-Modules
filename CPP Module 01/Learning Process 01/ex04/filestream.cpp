#include<iostream>
#include<fstream>
using namespace std;
void read_word_by_word(string filename) {
   fstream file;
   string word;
   file.open(filename.c_str());
   while(file >> word) { //take word and print
      cout << word << endl;
   }
   file.close();
}
int main() {
   string name;
   cout << "Enter filename: ";
   cin >> name;
   read_word_by_word(name);
   return (0);
}