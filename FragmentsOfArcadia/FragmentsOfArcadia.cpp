// FragmentsOfArcadia.cpp
// Written by Aiden Morrison for https://aiden-morrison.com
// Source on Github - https://github.com/Hecking-Heck/FragmentsOfArcadia

// Includes
#include <iostream>
#include <conio.h>
#include <stdlib.h>

// Using
using namespace std;

// Variables
char name[50];

// Init
int main()
{
	// To begin we set the scene and then ask the player for their name, we store this here for use throughout the rest of the game
	cout << "You awake to the muffled sounds of what seems to be an ongoing battle." << endl;
	cout << "Looking around, you realise you are locked in a shabby prison cell." << endl;
	cout << "Suddenly. A Voice!" << endl;
	cout << "Hey you over there, what is your name, prisoner?" << endl;
	cout << "\nEnter your name: ";
	cin.getline(name, 50);
	cout << "Well met, " << name << ". You no doubt will have heard by now, the red rock goblins are attacking the city." << endl;
	cout << "In a few hours the war will be over and they will have taken what they have came for, as for us? who knows." << endl;

	// Path One, Choice One
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
		cout << "Some moments of silence pass as the thunderings of war outside grow louder, the prisoner finally shakes his head." << endl;
		cout << "No matter, I would rather not wait here to die, I have a way to break out of here. are you coming with me\nor shall I leave you for dead?" << endl;
		break;
	default : cout << "Try again..." << endl;
		goto choiceOne_PathOneRetry;
		break;
	}

	// Path One, Choice Two
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

	// The game ends here, we end with the return code '0' to mark the application as having exited successfully.
	return 0;
}