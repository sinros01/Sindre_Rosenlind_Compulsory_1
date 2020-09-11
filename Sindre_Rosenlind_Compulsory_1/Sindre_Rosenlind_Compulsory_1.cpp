#include <iostream>																										
#include <string>																										
#include <cstdlib>																								//including cstd liberary for the random number generator.
#include <ctime>																								//including to use time for the random number generator.

int main() {
																								
	int playagain = 0;																							//integer for while-loop if you would like to play again.
	do {
		char choice = ' ';
		std::string player1name = "";																			//using strings for name of player1 and player2 in multiplayer.
		std::string player2name = "";
		char a = '1';																							// defining the character for the grid .
		char b = '2';
		char c = '3';
		char d = '4';
		char e = '5';
		char f = '6';
		char g = '7';
		char h = '8';
		char i = '9';
		int player1input;																						// defining the player input.
		int player2input;
		int exit = 0;																							//integer for while-loop(the game loop), and changes to exit the while-loop.
		int counter = 0;																						// to count inputs, so you can tell when the game is done if the game ended as a draw.
		int rng;																								// defining the random number generator integer.
		int exit2 = 0;																							// interger for while-loop(random number loop),and changes to exit the loop.

		std::cout << "----------Welcome to Tic Tac Toe!----------" << std::endl;
		std::cout << std::endl;
		std::cout << "Would you like to play singleplayer or multiplayer?" << std::endl;
		std::cout << "singleplayer enter: S		multiplayer enter: M" << std::endl;
		std::cin >> choice;																						//character for singleplayer or multiplayer.
		std::cout << std::endl;

		if (choice == 'S' || choice == 's') {																	// if-sentence for singleplayer.
			std::cout << "---------------Singleplayer----------------" << std::endl;
			do {																								// the while loop for the game.
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				std::cout << "Enter a number:";
				std::cin >> player1input;																		//input from player.
				counter++;																						//counts amounts of moves done.
				switch (player1input) {																			//To change the character from a number to an X in the grid.
				case 1:
					a = 'X';
					break;
				case 2:
					b = 'X';
					break;
				case 3:
					c = 'X';
					break;
				case 4:
					d = 'X';
					break;
				case 5:
					e = 'X';
					break;
				case 6:
					f = 'X';
					break;
				case 7:
					g = 'X';
					break;
				case 8:
					h = 'X';
					break;
				case 9:
					i = 'X';
					break;
				}
				if (a == 'X' && b == 'X' && c == 'X') {															//To tell the player if someone has won and to exit the while-loop if so. It does this by an if sentence for any winning condition. And if it finds a winning condition it will exit the loop by changing the value for the while-loop.
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (d == 'X' && e == 'X' && f == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (g == 'X' && h == 'X' && i == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (a == 'X' && d == 'X' && g == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (b == 'X' && e == 'X' && h == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (c == 'X' && f == 'X' && i == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (a == 'X' && e == 'X' && i == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				if (c == 'X' && e == 'X' && g == 'X') {
					std::cout << "Congratulation you have won the game" << std::endl;
					exit = 1;
				}
				else if (counter == 9 && exit != 1) {															// Uses the amount of moves done, and checks if any have won. If the moves are 9 and nobody has won it tells you its a draw and exits the loop.
					std::cout << "The game ended as a draw" << std::endl;
					exit = 1;
				}
				std::cout << std::endl;
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				if (counter != 9 && exit == 0) {																// if sentence to make sure that the game has not endes with both the input counter and the loop value. 
					do {																						// while loop for the random number generator in case it picks a number that is already taken. 
						std::srand(time(0));																	// finds the time for the random number generator. 
						rng = (std::rand() % 9) + 1;															// calculates a random number from 1 to 9 and skipps the 0 value. 
						if (rng == 1 && a == '1') {																// if sentences to make sure that the numbers choosen is not taken already in the grid.
							player2input = 1;																	// gives the AI(player2input) the right input.
							exit2 = 1;																			//exits the random number generator loop.
						}
						if (rng == 2 && b == '2') {
							player2input = 2;
							exit2 = 1;
						}
						if (rng == 3 && c == '3') {
							player2input = 3;
							exit2 = 1;
						}
						if (rng == 4 && d == '4') {
							player2input = 4;
							exit2 = 1;
						}
						if (rng == 5 && e == '5') {
							player2input = 5;
							exit2 = 1;
						}
						if (rng == 6 && f == '6') {
							player2input = 6;
							exit2 = 1;
						}
						if (rng == 7 && g == '7') {
							player2input = 7;
							exit2 = 1;
						}
						if (rng == 8 && h == '8') {
							player2input = 8;
							exit2 = 1;
						}
						if (rng == 9 && i == '9') {
							player2input = 9;
							exit2 = 1;
						}

					} while (exit2 == 0);
					exit2 = 0;																					// resets the exit2 value for the random nummber generator loop for next time. 
					counter++;																					// counts the input amounts
					switch (player2input) {																		// changes the AI(player2input) number to an O in the grid.
					case 1:
						a = 'O';
						break;
					case 2:
						b = 'O';
						break;
					case 3:
						c = 'O';
						break;
					case 4:
						d = 'O';
						break;
					case 5:
						e = 'O';
						break;
					case 6:
						f = 'O';
						break;
					case 7:
						g = 'O';
						break;
					case 8:
						h = 'O';
						break;
					case 9:
						i = 'O';
						break;
					}
					if (a == 'O' && b == 'O' && c == 'O') {														//checks if the AI has won the game. It does this by a if sentence for any winning condition. And if it finds a winning condition it will exit the loop by changing the value for the while-loop.
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (d == 'O' && e == 'O' && f == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (g == 'O' && h == 'O' && i == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (a == 'O' && d == 'O' && g == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (b == 'O' && e == 'O' && h == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (c == 'O' && f == 'O' && i == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (a == 'O' && e == 'O' && i == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					if (c == 'O' && e == 'O' && g == 'O') {
						std::cout << "You have lost the game" << std::endl;
						exit = 1;
					}
					else if (counter == 9 && exit != 1) {														// checks if the game has ended with a draw by checking amonts of moves done, and if a winning condition has happend. If it has done 9 moves and no winning condition has been fount it must be a draw, and outputs it to the player. 
						std::cout << "The game ended as a draw" << std::endl;
						exit = 1;
					}
					if (exit == 1) {																			//prints the grid one final time with final results before it exits the loop. But only if the game has ended. 
						std::cout << std::endl;
						std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
						std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
						std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
						std::cout << std::endl;
					}
				}
			} while (exit == 0);																				//exits the while loop if the game has a final result. 
		}
		else if (choice == 'M' || choice == 'm') {																// else if sentence for muliplayer.
			std::cout << "---------------Multiplayer-----------------" << std::endl;
			std::cout << std::endl;
			std::cout << "Enter name of player 1:" << std::endl;												// choose to use names in stead of player1 and player2 to make it more understandable and personal. 
			std::getline(std::cin, player1name);
			std::cin >> player1name;																			//gets the names of the players.
			std::cout << "Enter name of player 2:" << std::endl;
			std::getline(std::cin, player2name);
			std::cin >> player2name;
			std::cout << std::endl;
			do {																								// while-loop for the game in muliplayer. 
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				std::cout << player1name << " enter a number:";
				std::cin >> player1input;
				std::cout << std::endl;
				counter++;																						//counts amounts of inputs done by the players.
				switch (player1input) {																			//changes choosen number to an X in the grid.
				case 1:
					a = 'X';
					break;
				case 2:
					b = 'X';
					break;
				case 3:
					c = 'X';
					break;
				case 4:
					d = 'X';
					break;
				case 5:
					e = 'X';
					break;
				case 6:
					f = 'X';
					break;
				case 7:
					g = 'X';
					break;
				case 8:
					h = 'X';
					break;
				case 9:
					i = 'X';
					break;
				}
				if (a == 'X' && b == 'X' && c == 'X') {															//checks if player 1 has won the game.
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;																					//if the player has won it gives the exit value to 1, so it will exit the loop. 
				}
				if (d == 'X' && e == 'X' && f == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				if (g == 'X' && h == 'X' && i == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				if (a == 'X' && d == 'X' && g == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				if (b == 'X' && e == 'X' && h == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				if (c == 'X' && f == 'X' && i == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				if (a == 'X' && e == 'X' && i == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				if (c == 'X' && e == 'X' && g == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
				}
				else if (counter == 9 && exit != 1) {															//checks if the game has ended as a draw by using the amount of moves done with the counter, and checks if the player has won. If not it tells you its a draw, and exits the loop. 
					std::cout << "The game ended as a draw" << std::endl;
					exit = 1;
				}
				std::cout << std::endl;
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				if (counter != 9 && exit == 0) {																// if sentence to make sure the game has not ended yet. 
					std::cout << player2name << " enter a number:";
					std::cin >> player2input;
					counter++;
					std::cout << std::endl;
					switch (player2input) {
					case 1:
						a = 'O';
						break;
					case 2:
						b = 'O';
						break;
					case 3:
						c = 'O';
						break;
					case 4:
						d = 'O';
						break;
					case 5:
						e = 'O';
						break;
					case 6:
						f = 'O';
						break;
					case 7:
						g = 'O';
						break;
					case 8:
						h = 'O';
						break;
					case 9:
						i = 'O';
						break;
					}
					if (a == 'O' && b == 'O' && c == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (d == 'O' && e == 'O' && f == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (g == 'O' && h == 'O' && i == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (a == 'O' && d == 'O' && g == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (b == 'O' && e == 'O' && h == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (c == 'O' && f == 'O' && i == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (a == 'O' && e == 'O' && i == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					if (c == 'O' && e == 'O' && g == 'O') {
						std::cout << "Congratulation " << player2name << " has won the game" << std::endl;
						exit = 1;
					}
					else if (counter == 9 && exit != 1) {
						std::cout << "The game ended as a draw" << std::endl;
						exit = 1;
					}
					if (exit == 1) {
						std::cout << std::endl;
						std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
						std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
						std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
						std::cout << std::endl;
					}
				}
			} while (exit == 0);
		}
		else {
			std::cout << "Invalid input" << std::endl;																// Tells the user that the input for choice is invalid.
		}
		std::cout << "Would you like to play again?" << std::endl;													// asks the player if they want to play again.(does it also if the imput for choice is invalid).
		std::cout << "For yes enter: 1      For no enter: 2" << std::endl;
		std::cin >> playagain;																						// gets a value for yes or no.
		if (playagain == 1) {																						// if yes the loop will continue.
			playagain = 0;
		}
		 if (playagain == 2) {																						// if no it will exit the loop, and end the program. 
			playagain = 1;
		}
	}while (playagain == 0);
}