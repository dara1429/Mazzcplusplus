#include "rooms.h"
#include <vector>
#include <string>
using namespace std;
rooms::rooms()
{
  //Initializes the class rooms.
}

rooms::~rooms()
{
  //destructor for rooms.
}

vector<string> rooms::addRoom(vector<string> rooms, string inputRoom)
{
  //This function takes in the rooms vector and adds a room
  //based on user input (inputRoom)
  rooms.push_back(inputRoom);
  return rooms;
}

//needs to have rooms:: before the function name so that the program knows
// printRooms belongs to the class 'rooms'
void rooms::printRooms(vector<string> rooms)
{
  for(int i = 0; i < rooms.size(); i++)
  {
    cout << rooms.at(i) << endl;
  }
}
