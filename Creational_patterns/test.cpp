
// We'll also use a common example building a maze for a computer game—to
// illustrate their implementations.
//  The maze and the game will vary slightly from pattern to pattern. we'll just
// focus on how mazes get created. We define a maze as a set of rooms. A room
// knows its neighbors; possible neighbors are another room, a wall, or a door
// to another room. The classes Room, Door, and Wall define the components of
// the maze

#include <iostream>
// #include <list>
// #include <string>
enum Direction { North, South, East, West };
using namespace std;
// class Player {
// private:
//   std::string name;

// public:
//   Player(std::string name) { this->name = name; }
// };

// // ---------------- MapSite -----------------------
// class MapSite {
// public:
//   virtual void Enter() = 0;
// };

// // ---------------- Room ---------------------

// class Room : public MapSite {
// public:
//   Room(){};
//   Room(int roomNo);
//   MapSite *GetSide(Direction) const;
//   void SetSide(Direction, MapSite *);
//   virtual void Enter();

// private:
//   MapSite *_sides[4];
//   int _roomNumber;
// };

// Room::Room(int roomNo) { this->_roomNumber = roomNo; }

// void Room::SetSide(Direction direction, MapSite *component) {
//   _sides[direction] = component;
// }

// // ---------------- Wall ---------------------

// class Wall : public MapSite {
// public:
//   Wall() {}
//   virtual void Enter();
// };

// // ---------------------- Door -------------------------

// class Door : public MapSite {
// public:
//   Door() {}
//   Door(Room *, Room *);
//   virtual void Enter();
//   void OutSideRoom(Room *);
//   void InSideRoom(Room *);
//   Room *GetOutRoom() const;
//   Room *GetInRoom() const;

// private:
//   Room *inRoom;
//   Room *outRoom;
//   bool _isOpen;
// };

// Door::Door(Room *r1, Room *r2) {
//   this->inRoom = r1;
//   this->outRoom = r2;
//   this->_isOpen = false;
// }

// void Door::OutSideRoom(Room *outRoom) { this->outRoom = outRoom; }
// void Door::InSideRoom(Room *inRoom) { this->inRoom = inRoom; }
// Room *Door::GetInRoom() const { return this->inRoom; }
// Room *Door::GetOutRoom() const { return this->outRoom; }
// // ------------------------- Maze --------------------------

// class Maze {
// public:
//   Maze() {}
//   void addRoom(Room *);
//   Room *RoomNo(int) const;

// private:
//   list<Room *> _roomList;
// };

// void Maze::addRoom(Room *room) { _roomList.push_back(room); }

// // -------------------------- MazeGame -------------------------

// class MazeGame {
// public:
//   MazeGame() {}
//   Maze *CreateMaze();
// };

// Maze *MazeGame::CreateMaze() {
//   Maze *aMaze = new Maze;
//   Room *r1 = new Room(1);
//   Room *r2 = new Room(2);
//   Door *theDoor = new Door();
//   theDoor->OutSideRoom(r1);
//   theDoor->InSideRoom(r2);

//   aMaze->addRoom(r1);
//   aMaze->addRoom(r2);

//   r1->SetSide(Direction::North, new Wall());
//   r1->SetSide(Direction::West, new Wall());
//   r1->SetSide(Direction::East, new Wall());
//   r1->SetSide(Direction::South, theDoor);
//   r2->SetSide(Direction::North, theDoor);
//   r2->SetSide(Direction::South, new Wall());
//   r2->SetSide(Direction::West, new Wall());
//   r2->SetSide(Direction::East, new Wall());

//   return aMaze;
// }

// --------------------------------------------------------------------
