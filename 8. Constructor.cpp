#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
  string name;
  int age;
  int runs;

public:
  // 1. Default Constructor
  CricketPlayer() : name("Unknown"), age(0), runs(0)
  {
    cout << "Default constructor called." << endl;
  }

  // 2. Parameterized Constructor
  CricketPlayer(const string &playerName, int playerAge, int playerRuns)
      : name(playerName), age(playerAge), runs(playerRuns)
  {
    cout << "Parameterized constructor called." << endl;
  }

  // 3. Copy Constructor
  CricketPlayer(const CricketPlayer &other)
      : name(other.name), age(other.age), runs(other.runs)
  {
    cout << "Copy constructor called." << endl;
  }

  // 4. Move Constructor
  CricketPlayer(CricketPlayer &&other) noexcept
      : name(move(other.name)), age(other.age), runs(other.runs)
  {
    other.age = 0;
    other.runs = 0;
    cout << "Move constructor called." << endl;
  }

  // 5. Copy Assignment Operator
  CricketPlayer &operator=(const CricketPlayer &other)
  {
    if (this != &other)
    { // Avoid self-assignment
      name = other.name;
      age = other.age;
      runs = other.runs;
      cout << "Copy assignment operator called." << endl;
    }
    return *this;
  }

  // 6. Move Assignment Operator
  CricketPlayer &operator=(CricketPlayer &&other) noexcept
  {
    if (this != &other)
    { // Avoid self-assignment
      name = move(other.name);
      age = other.age;
      runs = other.runs;
      other.age = 0;
      other.runs = 0;
      cout << "Move assignment operator called." << endl;
    }
    return *this;
  }

  // 7. Overload + Operator to Add Runs of Two Players
  CricketPlayer operator+(const CricketPlayer &other) const
  {
    return CricketPlayer(name + " & " + other.name, max(age, other.age), runs + other.runs);
  }

  // 8. Overload += Operator to Add Runs from Another Player
  CricketPlayer &operator+=(const CricketPlayer &other)
  {
    runs += other.runs;
    return *this;
  }

  // 9. Overload == Operator to Compare Two Players
  bool operator==(const CricketPlayer &other) const
  {
    return name == other.name && age == other.age && runs == other.runs;
  }

  // 10. Overload << Operator for Outputting Player Info
  friend ostream &operator<<(ostream &os, const CricketPlayer &player)
  {
    os << "Player Name: " << player.name << ", Age: " << player.age << ", Runs: " << player.runs;
    return os;
  }

  // Destructor
  ~CricketPlayer()
  {
    cout << "Destructor called for " << name << endl;
  }
};

int main()
{
  // Using default constructor
  CricketPlayer player1;
  cout << player1 << endl;

  // Using parameterized constructor
  CricketPlayer player2("Babar Azam", 32, 12000);
  cout << player2 << endl;

  // Using copy constructor
  CricketPlayer player3 = player2;
  cout << player3 << endl;

  // Using move constructor
  CricketPlayer player4 = move(player3);
  cout << player4 << endl;

  // Using copy assignment operator
  CricketPlayer player5;
  player5 = player2;
  cout << player5 << endl;

  // Using move assignment operator
  CricketPlayer player6;
  player6 = move(player5);
  cout << player6 << endl;

  // Using overloaded + operator
  CricketPlayer combinedPlayer = player2 + player4;
  cout << combinedPlayer << endl;

  // Using overloaded += operator
  player2 += player4;
  cout << "After += operator, player2: " << player2 << endl;

  // Using overloaded == operator
  if (player2 == player6)
  {
    cout << "player2 and player6 are equal." << endl;
  }
  else
  {
    cout << "player2 and player6 are not equal." << endl;
  }
}
