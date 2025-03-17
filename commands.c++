#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  cout << min(5, 1000);
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int mathApp = 1;
  cout << mathApp;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int Answer = 15;
  cout << Answer;
  return 0;
}
if input = BR Accent
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

else(
if(F2 = pressed
#include <iostream>
using namespace std;

int main() {
  cout << "U CRRAZZZY!";
  return 0;
}))
mathApp = (int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum1;    // 800 (400 + 400)
x * x = x)


// Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();