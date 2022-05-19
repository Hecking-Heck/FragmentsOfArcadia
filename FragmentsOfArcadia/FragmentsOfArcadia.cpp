// FragmentsOfArcadia.cpp

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	char name[50];
	cout << "You awake to the muffled sounds of what seems to be an ongoing battle." << endl;
	cout << "Looking around, you realise you are locked in a shabby prison cell." << endl;
	cout << "Suddenly. A Voice!" << endl;
	cout << "Hey you over there, what is your name, prisoner?" << endl;
	cout << "\nEnter your name: ";
	cin.getline(name, 50);
	cout << "Well met, " << name << ". You no doubt will have heard by now, the red rock goblins are attacking the city." << endl;
	cout << "In a few hours the war will be over and they will have taken what they have came for, as for us? who knows." << endl;

	// Path One Choice One
	int choiceOne_PathOne;
	cout << "# What is your response?" << endl;
	cout << "\t >> Enter '1' to show your anger." << endl;
	cout << "\t >> Enter '2' to show your worry." << endl;
    choiceOne_PathOneRetry:
	cout << "\nEnter your choice: ";
	cin >> choiceOne_PathOne;

	system("cls");
	switch (choiceOne_PathOne)
	{
	case 1:	cout << "You talk about your anger toward the Red Rock Goblins, the other prisoner likes this." << endl;
		cout << "It looks like I was right about you then, come on we are breaking out of this place." << endl;
		break;
	case 2: cout << "You talk about your worry toward the Red Rock Goblin attack, the other prisoner is anoyyed by this." << endl;
		cout << "You need a strong will to break out of this place, perhaps my interest in you was misguided..." << endl;
		break;
	default : cout << "Try again..." << endl;
		goto choiceOne_PathOneRetry;
		break;
	}

	// Path One Choice Two
	int choiceOne_PathTwo;
	cout << "# What is your response?" << endl;
	cout << "\t >> Enter '1' to agree and break out of this prison." << endl;
	cout << "\t >> Enter '2' to decline and stay in your cell." << endl;
    choiceTwo_PathOneRetry:
	cout << "\nEnter your choice: ";
	cin >> choiceOne_PathTwo;

	system("cls");
	switch (choiceOne_PathTwo)
	{
	case 1:	cout << "The Prisoner hands you a small key, it seems they have had the ability to break out all this time. where they waiting your you?" << endl;
		break;
	case 2: cout << "You really want to stay here? Then so be it, I will go without you. The Prisoner breaks out and leaves the area." << endl;
		cout << "You stay in your cell, some hours or days pass. the siege is now over and you hear footsteps approaching..." << endl;
		cout << "A Red Rock Goblin Warchief laughs at you in your current state, his underling opens your cell.\nBefore a moments notice you are beheaded and your body is hung against the wall." << endl;
		break;
	default: cout << "Try again..." << endl;
		goto choiceTwo_PathOneRetry;
		break;
	}

	return 0;
}