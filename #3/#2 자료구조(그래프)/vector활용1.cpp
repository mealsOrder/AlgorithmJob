#include <cstdio>
#include <vector>

using namespace std;

int main() {
  
  vector <int> myArray(10);
  
  for(int i=0;i<10;i++) 
    myArray[i] = i;
  
  myArray.push_back(10);
  
  for(int i=0;i<11;i++) 
    printf("%d ",myArray[i]);
  

  return 0;
}
