//Author: Pachia Vang 
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;
  vector<char> lettersInFile;
  char letter;
  int num; //used for getting the vector size 
  
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last
  while(!(in.eof())) 
  {
    in>>letter;
    if (letter >= 'A' && letter <= 'z')
    {
      lettersInFile.push_back(letter);
    }
  } 
  last = lettersInFile.size() - 1;
  first = lettersInFile[0]; 

  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
