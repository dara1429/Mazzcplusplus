#ifndef ROOMS_H
#define ROOMS_H
#include<vector>
#include<iostream>
#include<string>

class rooms
{
  public:
    rooms();
    ~rooms();
    std::vector<std::string> addRoom(std::vector<std::string>,std::string inputRoom);
    void printRooms(std::vector<std::string>);
  protected:
  private:
};

#endif //ROOMS_H
