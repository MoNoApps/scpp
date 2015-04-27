#include <string>
using std::string;

class Bot {
  private:
    string name;

  public:
    void setName (string);
    string getName ();
};

void Bot::setName(string n) {
  name = n;
}

string Bot::getName() {
  return name;
}
