#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file
    ofstream file;
    file.open("numbers.html");
    // Enter html into file 
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // Build table in file
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    // Close table tags and close the file 
    file << "</table>\n</body>\n</html>";
    file.close();
    // Return pointer to underlying stream buffer
    ifstream input("numbers.html");
    cout << input.rdbuf();
    // Close file
    input.close();
    return 0;
}
