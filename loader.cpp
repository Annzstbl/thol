#include "loader.h"

vector<vector<int>> Loader::load_txt(const string& file_path)
{
    ifstream ifile(file_path);
    string line;  
    vector<vector<int>> data;
    if(!ifile)
        cerr << "Error: File Open Failed." << endl;
    while(getline(ifile, line))
    {
        stringstream ss ;
        if(line.size() > 0 && line[0] == '#') //first line
            continue;
        for(auto& c : line)                   //change format
            if( (c < '0' || c > '9') && c != '-' )
                c = ' ';
        ss << line;
        int num = 0;
        vector<int> temp_line;
        while(ss >> num)
            temp_line.push_back(num);
        data.push_back(temp_line);
    }
    return data;
}