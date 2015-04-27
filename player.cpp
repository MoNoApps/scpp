#include <string>
#include <iostream>
#include "blib/bot.cpp"

using namespace std;

int main ()
{
  Bot bot;
  string name;
  cout << "Hey you, I am a bot whitout name.";
  cout << "\nPlease, give me a name: ";
  cin >> name;
  bot.setName(name);
  cout << "Thanks, my new name is: " << bot.getName() << ".\n";
}
