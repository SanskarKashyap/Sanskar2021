#include <iostream>
using namespace std;
class Player
{
protected:
    int jerseyNumber;
    string name;
    int ranking;
    int strikeRate;
    int battingaverage;

public:
    Player()
    {
        jerseyNumber = 0;
        name = "";
        ranking = 0;
        strikeRate = 0;
        battingaverage = 0;
    }

    friend ostream &operator<<(ostream &, Player &);
    friend istream &operator>>(istream &, Player &);
};
istream &operator>>(istream &is, Player &P)
{
    cout << "Enter the name of the player: ";
    is >> P.name;
    cout << "Enter the jerseyNumber: ";
    is >> P.jerseyNumber;
    cout << "Enter the ranking: ";
    is >> P.ranking;
    cout << "Enter the strike rate: ";
    is >> P.strikeRate;
    cout << "Enter the number of batting average: ";
    is >> P.battingaverage;
}
ostream &operator<<(ostream &os, Player &P)
{
    os << "Name: " << P.name << endl;
    os << "Jersey Number: " << P.jerseyNumber << endl;
    os << "Strike Rate: " << P.strikeRate << endl;
    os << "Ranking: " << P.ranking << endl;
    os << "Number of international matches: " << P.battingaverage << endl;
}
int main()
{
    int n;
    cout << "Enter the no of player : ";
    cin >> n;
    Player *p;
    p = new Player[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i];
    }
}