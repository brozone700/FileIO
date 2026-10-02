# FileIO

```
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int prntCount = 0;
int x;
int y;
string sx;
string sy;
string word;

int main(){
  setup stringstreams
  open file
  if (file != open):
    print("unable to open file")
  str currentLine
  
  while getline(inFile, currentLine):
    clear stringstreams
    clear converter
    sx = number before first comma as string
    sy = number between first and second comma as string
    word = everything after second comma
    x = sx converted to integer
    clear converter
    y = sy converted to integer
    prntCount = x + y
    for i in range(prntCount):
      print(word)
    print("\n")
  close file
}
```
