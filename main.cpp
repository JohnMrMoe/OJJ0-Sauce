// basic file operations
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  if (argc > 1) {
    cout << "argv[1] = " << argv[1] << endl;
  } else {
        cout << "Terminal Error: No initial file given.";
    return -1;
  }
  ifstream mainfile(argv[1]); //open the file

  if (mainfile.is_open() && mainfile.good()) {
    //File aquired
    //We can now forward file to methods

    /*
    cout << "File is now open!\nContains:\n";
    string line = "";
    while (getline(infile, line)){
        cout << line << '\n';
    }
    */
  } else {
    cout << "Terminal Error: Initial file could not be Opened";
  }
  return 0;
}

// Thanks in parts to Nick Evan on s(Daniweb)
