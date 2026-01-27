#include <iostream>

#include <string>
using namespace std;

Struct PersonalProfile {
  string name;
string goals;
string interests;
string dreams;
string futureInFiveYears
};

int main() {
  PersonalProfile me;

cout << "Enter your name: Allen Enriquez: ";
getline(cin, me.name);

cout << "Enter your goals: 1.Go to the gym everyday in the week 2.Finish this last year of classes 3.Work towards increasing my knowledge in languages: ";
getline(cin, me.goals);

cout << "Enter your current interests: My current interests are going to the gym and playing video games. I also like to learn languages and are currently workin on French and Italian: ";
getline(cin, me.interests);

cout << "Enter your dreams: I don't really think of my dreams too often but I woulds really have to say to work a steady job that allows me to provide for my family: ";
getline(cin, me.dreams);

cout << "Where do you see yourself in 5 years: I see myself in 5 years working my job and trying to just the fruits of my labor with staying busy and spending time with friends and family, living a simple life. ";
getline(cin, me.futureInFiveYears);

cout << "Name: " << me.name << endl;
cout << "Goals: " << me.goals << endl;
cout << "Interests: " << me.interests << endl;
cout << "Dreams: " << me.dreams << endl;
cout << "5-year vision: " << me.futureInFiveYears << endl;

return 0;
}
