#include <iostream>   //Ever Ibarra Almaral
#include <string>
#include <fstream>
using namespace std;

int main(){
string Read;
string Banana = "banana";
char archive[50];
int x = 0;
int y = 0;
int counter = 0;
cout << "Write the name of your file: ";
cin >> archive;

ifstream read_file (archive);
if (read_file.is_open()){
while (getline(read_file , Read)){
      x = 0;
      while (x < Read.length()) {
        char character = Read[x];
        if ( character == 'B' || character== 'b'){
          y = x + 1;
          char character = Read[y];

          if (character == 'A' || character== 'a'){
            y++;
            char character = Read[y];

            if (character == 'N' || character== 'n'){
              y++;
              char character = Read[y];

              if (character == 'A' || character== 'a'){
                y++;
                char character = Read[y];

                if (character == 'N' || character== 'n'){
                  y++;
                  char character = Read[y];

                  if (character == 'A' || character== 'a') {
                    counter++;
                  }
                }
              }
            }
          }
        }
        x = x + 1;
}

    }read_file.close();
    }else{
      cout << "Error 404 not found" << endl;
    }
cout << "I found " << counter << " bananas....So eat them all!!!...or not..." << endl;
return 0;
}
