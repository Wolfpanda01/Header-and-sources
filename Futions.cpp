#include "Futions.h"
#include <iostream>
using namespace std;

/*void functintro
no imput, no output, just the intro of the story of Isle of the story*/
void functintro() {
	cout << "Welcome to the Isle of the Tuskva!" << endl;
	cout << "You have gained animal powers and are being hunted like a wild animal." << endl;
	cout << "The safe place to go is the Isle of the Tuskva where all of the animal people are and maybe you'll make a friend to help you!." << endl;
	cout << "Pick 2 or 3";
}
void functmidchooses(int l) {
	cin >> l;
	//void functmidchooses, middle of story, input number, output which friend you meet.
	if (l > 2) {
		cout << "This big boar man comes up you to you" << endl;
		cout << "You must had a rough landing getting here said the boar in a gruffy voice." << endl;
		cout << "How about I show ya the best places ta drink said the boar." << endl;
		cout << "I totally forgot to tell you what my name is! HA HA, My name is Hash." << endl;
		cout << "What's your name, champ?" << endl;
		cin >> name;
		cout << name << ", thats a fantaic name!" << endl;
		//input string, output the string in to the sentece 
	}
	else {
		cout << "An elegent fox women comes up you to you" << endl;
		cout << "You seemed to have a hard time, young one said the fox in a gentle voice" << endl;
		cout << "We should get you setted in to the isle life" << endl;
		cout << "My name is Valarie, what is your name?" << endl;
		cin >> name;
		cout << name << ", thats a magficent name!" << endl;
		//input string, output the string in to the sentece 
	}
}
void fuctionend() {
	cout << "You were shown around by a friendy local and they beacame your first friend on the isle that now is your home." << endl;
	cout << "You made lots of friends and ilse life became sencnd nature." << endl;
	cout << "The animal powers that you had gained became tamed by learn how to to control them on the isle." << endl;
	cout << "Great job, You made a friend and got control of your powers!" << endl;
	//end of story, no inputs, no outputs
}


