#include <fstream>
using namespace std;
int main() 
{
  ofstream MyFile("filename.html");
  MyFile << "<!DOCTYPE html><html><body><h1 style=color:blue;>A Blue Heading</h1><p style=color:red;>A red paragraph.</p></body></html>";
  MyFile.close();
}
