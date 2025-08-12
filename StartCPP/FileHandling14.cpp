#include<iostream>
#include<fstream>
using namespace std;
void writing(){
    ofstream fout;      
    fout.open("file1.txt", ios::out); // Open file for writing, truncating it if it exists
    /*fout means the file will open in write mode in a file directory*/
    char str[]="This is a file handling example in C++";
    fout << str; // Write the string to the file     
    fout.close(); 
}

void reading(){
    ifstream fin;
    char ch;
    fin.open("file1.txt", ios::in); // Open file for reading
    if(!fin){
        cout << "file not found!" << endl;
        return; // Exit if the file cannot be opened
    }else{
        fin.seekg(10); // Move the read position to the 10th character
        cout << "Reading from file after seeking to position 10:" << endl;
        ch=fin.get(); // Read a single character from the file
        while(!fin.eof()){
            cout<<fin.tellg() << " : " << ch << endl; // Print the current position and character
            ch=fin.get();
        }

    }
    fin.close();
}

void append(const char data[]){ // Corrected to accept a const char pointer
    ofstream fout;
    fout.open("file1.txt", ios::app); // Open file for appending
    fout << data; // Append data to the file
    fout.close();
}

int main(){
    writing(); // Create and write to the file first
    cout << "--- Reading initial file content ---" << endl;
    reading();
    cout << "\n--- Appending new data ---" << endl;
    append("\nThis is appended data."); // Appending new content
    cout << "--- Reading file content after append ---" << endl;
    reading();
    cout<<endl;
    return 0;
  
}