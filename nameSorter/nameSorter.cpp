//libraries
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
string getFileName(); //get user filename

//main program
int main()
{
    //Data
    string objective = "Encode any string entered by adding 1 to the ASCII value, outputs to secret.txt"; //program objective
    string instructions = ""; //user instructions if needed
    string fileName; //user selected input filename
    ifstream fin; //represents input file
    ofstream fout;
    string line; //one line from input file
    int lineNumber = 0; //number of lines in the input file
    string output = getFileName();
    introduction(objective, instructions); //user introduction

    const int SIZE = 5;
    string name[SIZE];
    int count = 0;
    const int NEW_SIZE = 5;

    string other[NEW_SIZE];


    fileName = "secret.txt";
    fin.open(fileName.c_str());
    fout.open(output.c_str());
    if (!(fin.good())) throw "I/O error";




    string temp;
    while (fin.good()) {

        for (int i = 0; i < SIZE; i++) {

            fin >> name[i];
            fin.ignore(1000, 10);
        }

    }


    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {


            if (name[i] < name[j]) {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }


        
    }

  


    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {
            string a, b;
            a = name[i];
            b = name[j];

            if ((a == b)){
            
            

            other[i] = name[i];
            cout << i << j <<  endl;
            }
            

        }
        

        cout << other[i] << endl;
        fout << other[i] << endl;

    }
    




}

void introduction(string obj, string ins)
{
    //data
    //obj is the program objective from main program
    //ins is the optional user instructions

    //output user introduction
    cout << "Objective: This program will ";
    cout << obj << endl;
    cout << "Programmer: Teacher\n";
    cout << "Editor(s) used: Notepad\n";
    cout << "Compiler(s) used: TDM MinGW\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl;
    cout << endl << ins << endl << endl;
}//introduction

//get user specified filename
string getFileName()
{
    //data
    string fN; //user specified filename

    //input filename
    do
    {
        cout << "Please enter an input filename [i.e.: x.txt]: ";
        getline(cin, fN);
    } while (!(fN.length() >= 5)); //do-while
    return fN;
}//getFileName