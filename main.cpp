//Main driver filename
//Daniel Rapacchietta, Matt Mazzarella
//C++ programing
#include <iostream>
#include <vector>
#include <string>
#include "rooms.h"
using namespace std;

int main(int argc, char* argv[])
{
  vector<string> roomsVector;
  int command = 0;
  string roomName;

  //initialize the rooms class
  rooms r;

  while(command != 3)
  {
    cout << endl;
    cout << "///Menu///" << endl;
    cout << "1. add room to vector rooms" << endl;
    cout << "2. print rooms vector" << endl;
    cout << "3. Quit" << endl;

    cin >> command;
    if(command == 1)
    {
      cout << "input name of room to add : " << endl;
      cin >> roomName;
      roomsVector = r.addRoom(roomsVector,roomName);
    }
    if(command == 2)
    {
      cout << "printing rooms vector :"  << endl;
      r.printRooms(roomsVector);
    }
  }
    cout << "seeya nerd" << endl;
  return 0;
}
//endmain

//vector to store names
//vector<string> rooms;
//so, vectors are like arrays but less shitty.


/*
//Putting this into more practical use with functions...
for(int i = 0; i < 10; i++)
{
  //filling the vector loop
  rooms.push_back("lul");
}
for(int j = 0; j < 10; j++)
{
  //printing the vector loop
  cout << rooms.at(j) << endl;//this line
  printf("This is j: %i :\n",j);
}
*/
