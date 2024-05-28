#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    fstream file("names.txt", ios::in);
    int rows = 5, cols[rows] = {5, 3, 6, 4, 6};
    char **names = new char*[rows];
    for(int i = 0; i < rows; i++)
        names[i] = new char[cols[i]];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols[i]; j++)
            file>>names[i][j];
    cout<<"Names found in file are: "<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols[i]; j++)
            cout<<names[i][j];
        cout<<endl;
    }
    for(int i = 0; i < rows; i++) 
        delete[] names[cols[i]];
    delete[] names;
    file.close();
    return 0;
}