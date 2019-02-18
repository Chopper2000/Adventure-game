#include <iostream>
#include <string>
using namespace std;
int main()
{
	//bool reset = false
	//loop if reset is true
	printf("Hello Adventurer. \n");

	printf("There are two doors choose, Left or Right. \n");

	string input;
	cin >> input;
	if ((input == "Left") || (input == "left"))
	{
		cout << "You find yourself in a dark room.\n";
		cout << "You find a flashlight and a lantern, Which do you take?.\n";

		string input;
		cin >> input;
		if ((input == "Flashlight") || (input == "flashlight"))
		{
			cout << "you try and turn on the Flashlight, but nothing happens.\n";
			cout << "you can check the flashlight for batteries. Yes or no. \n";

			string input;
			cin >> input;
			if ((input == "Yes") || (input == "yes"))
			{
				cout << "You open the flashlight battery container to find their is no batteries.\n";
				cout << "Do you wish to [explore or return] to were you began? \n";

				if ((input == "Explore") || (input == "explore"))

					cout << "you find a large door or a tiny door which do you choose. \n";


				else if ((input == "Return") || (input == "return"))
					cout << "you enter the room from where you started. do you choose to go Right or Left?";
			}

			else if ((input == "No") || (input == "no"))
			{
				cout << "You fall over and scrape your knee, and you start to bleed.\n";
				cout << "You rush to find something to clean and stop the bleeding of the wound.\n";
				cout << "do you travel to the nearest door or a door on the other side of the room? \n";
			}
		}

		if ((input == "Lantern") || (input == "lantern"))
		{

			cout << "You try to ignite the lantern, while you are trying to you burn your hand. \n";
			cout << "You are looking for water and you hear noise. Do you head towards the noise or avoid the noise.\n";

		}
	}

	else if ((input == "Right") || (input == "right"))
	{
		cout << "You opened the door. You get grabbed by a monster. The monster then eats you. \n";
		cout << "would you like to reset. \n";


	}

	system("pause");
	return 0;
}