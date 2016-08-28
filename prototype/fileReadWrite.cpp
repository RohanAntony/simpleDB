#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  fstream io;
  io.open("test",ios::binary | ios::trunc | ios::out | ios::in);
  if(io){
    std::cout << "Successfully connected to 'test'." << std::endl;
  }else{
    std::cout << "Unable to connect to 'test'." << std::endl;
  }
  return 0;
}
