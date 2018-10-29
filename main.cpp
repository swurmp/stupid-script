#include <iostream>
#include <fstream>
#include <string>

using namespace std;

long fileCharLength(ifstream &inStream) {
	if (inStream.is_open()) {
		string line;
		long numChars = 0;

		while (getline(inStream, line)){
			numChars += line.length();
		}
		return numChars;
	} else {
		cerr << "File not opened." << endl;
		return -1;
	}
}

int main(int argc, char *argv[]) {
	string *filelocation;
	ifstream script_file;

	*filelocation = argv[1];

	script_file.open(*filelocation);
	cout << fileCharLength(script_file) << endl;
	script_file.close();

	return 0;
}
