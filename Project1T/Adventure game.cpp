#include <iostream>
#include <string>
using namespace std;
string input;

void Win(char Youwin[13][150])
{
	for (int H = 0; H < 13; H++)
	{
		for (int N = 0; N < 150; N++)
		{
			cout << Youwin[H][N];
		}
		cout << endl;
	}

}
void Print(char Colossuem[13][150])
{
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 150; j++)
		{
			cout << Colossuem[i][j];
		}
		cout << endl << endl;
	}
}
void Tic(char ticArr[13][150])
	{
		for (int l = 0; l < 13; l++)
		{
			for (int k = 0; k < 150; k++)
			{
				cout << ticArr[l][k];
			}
			cout << endl << endl;
		}
	}
int main()
{
	
	char colossuem[13][150] = 
	{
		"				 ||||||||||",
		"			     ////----------\\\\\\\\",
		"			 ////------------------\\\\\\\\",
		"		     ////--------------------------\\\\\\\\",
		"		 ////----------------------------------\\\\\\\\",
		"	     ////------------------------------------------\\\\\\\\",
		"	    ||||--------------------------------------------|||| ",
		"	     \\\\\\\\------------------------------------------////",
		"	         \\\\\\\\----------------------------------////",
		"		     \\\\\\\\--------------------------////",
		"			 \\\\\\\\------------------////",
		"			     \\\\\\\\----------////",
		"				 ||||||||||"
	};

	
	
	

		char TicTacToe[13][150] =
		{
			"	-------------------------------------",
			"	|           |           |           |",
			"	|     1     |     2     |     3     |",
			"	|           |           |           |",
			"	-------------------------------------",
			"	|           |           |           |",
			"	|     4     |     5     |     6     |",
			"	|           |           |           |",
			"	-------------------------------------",
			"	|           |           |           |",
			"	|     7     |     8     |     9     |",
			"	|           |           |           |",
			"	-------------------------------------"
		};

		char Youwin[13][150] =
		{
		                               
  "  __ __                  _     ",
  " |  |  |___ _ _    _ _ _|_|___ ",
  " |_   _| . | | |  | | | | |   |",
  "   |_| |___|___|  |_____|_|_|_|",
                               
		
		};


	bool gameOver = false;
	while (!gameOver)
	{
		system("cls");
		

		cout << "Hello Adventurer.\n";

		cout << "There are two doors which do you choose, Left or Right. \n";

		cin >> input;
		if ((input == "Left") || (input == "left"))
		{
			cout << "You find yourself in a dark room.\n";
			cout << "You find a flashlight and a lantern, Which do you take?.\n";


			cin >> input;
			if ((input == "Flashlight") || (input == "flashlight"))
			{
				cout << "you try and turn on the Flashlight, but nothing happens.\n";
				cout << "you can check the flashlight for batteries. Yes or no. \n";


				cin >> input;
				if ((input == "Yes") || (input == "yes"))
				{
					cout << "You open the flashlight battery container to find their is no batteries.\n";
					cout << "Do you wish to [explore or return] to were you began? \n";


					cin >> input;
					if ((input == "Explore") || (input == "explore"))
					{
						cout << "You find a [giant] door or a [tiny] door which do you choose. \n";


						cin >> input;
						if ((input == "Giant") || (input == "giant"))
						{
							
							cout << "As the giant door creaks as it opens, the sunlight starts to brighten up the dark chamber, causing you to flinch \n";
							cout << "as you close your eyes so that the bright light does not hit your unfocused eyes.\n";
							
							cout << "As you walk outside you notice that you have entered a colosseum.\n ";
							cout << "There is a rack of weapons. Do you want to take a [sword] or a [mace].\n";
							Print(colossuem);

							cin >> input;
							if ((input == "Sword") || (input == "sword"))
							{
							cout << "Two Giant doors creak and crash open you must choose what monster or animal you fight first, Left or Right? \n";
							}

							else if ((input == "Mace") || (input == "mace"))
							{
							cout << "Two doors screech open your are forced to decide who lives or who dies.\n";
							cout << "one of them has a family while the other is alone. you must pick without knowing who has and who doesnt.\n";
							}
						}

						else if ((input == "Tiny") || (input == "tiny"))
						{
							cout << "Once the door opens, three mice with sword attack your ankles as they cut at your achilles tendon.\n";
							cout << "You fall in pain onto the mice killing them instantly.\n";
							cout << "after you finished the three mice the door then opens up and leads to a long corridor,\n";
							cout << "do you wish to [follow] the path or go through the [giant] door.\n";


							
						
							cin >> input;
							if ((input == "Follow") || (input == "follow"))
							{
								cout << "As your walking through the corridor you notice a family photo.\n";
								cout << "you stumble on to a man that resembles the male in the photo however the man is alot older now. He is sitting at a table infront of a wooden board.\n";
								cout << "you get closer to the man and you notice there is noughts and crosses on the table next to the wooden board.\n";
								Print(TicTacToe);
								cin >> input;
							}
							else if ((input == "Giant") || (input == "giant"))
							{
								cout << "As the giant door creaks as it opens, the sunlight starts to brighten up the dark chamber, causing you to flinch \n";
								cout << "as you close your eyes so that the bright light does not hit your unfocused eyes.\n";
								cout << "As you walk outside you notice that you have entered a colosseum.\n ";
								cout << "There is a rack of weapons. Do you want to take a [sword] or a [mace].\n";

								cin >> input;
								if ((input == "Sword") || (input == "sword"))
								{
									cout << "Two Giant doors creak and crash open you must choose what monster or animal you fight first, Left or Right? \n";
								}

								else if ((input == "Mace") || (input == "mace"))
								{
									cout << "Two doors screech open your are forced to decide who lives or who dies.\n";
									cout << "one of them has a family while the other is alone. you must pick without knowing who has and who doesnt.\n";
								}
							}
						}
					}

					else if ((input == "Return") || (input == "return"))
					{
						cout << "you enter the room from where you started. do you choose to go Right or Left? \n";
						cout << "";
					}
				}

				else if ((input == "No") || (input == "no"))
				{
					cout << "You fall over and scrape your knee, and you start to bleed.\n";
					cout << "You rush to find something to clean and stop the bleeding of the wound.\n";
					cout << "do you travel to the [nearest] door or a door on that if [further] away? \n";

					cin >> input;

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

			cin >> input;

		}
	}
	system("pause");
	return 0;
} 