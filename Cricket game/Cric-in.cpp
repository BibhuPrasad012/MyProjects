#include "game.h"
using namespace std;


int main() {

	Game game;
	game.welcome();

	cout << "\nPress Enter to continue";
	cin.get ();

    game.showAllPlayers();

	cout << "\nPress Enter to continue";
	cin.get ();

	game.selectPlayers();
	game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
    cin.get ();

    game.toss();

    game.startFirstInnings();

    game.startSecondInnings();

    game.result();

    game.showMatchSummary();


	return 0;
}
