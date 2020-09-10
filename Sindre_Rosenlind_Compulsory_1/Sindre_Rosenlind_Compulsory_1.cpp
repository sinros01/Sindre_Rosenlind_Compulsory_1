#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
	char choice = ' ';
	std::string player1name = "";
	std::string player2name = "";
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	char e = '5';
	char f = '6';
	char g = '7';
	char h = '8';
	char i = '9';
	int player1input;
	int player2input;
	int exit = 0;
	int counter = 0;
	int rng;
	int exit2 = 0;
	int playagain = 0;
	do {
		std::cout << "----------Welcome to Tic Tac Toe!----------" << std::endl;
		std::cout << std::endl;
		std::cout << "Would you like to play singleplayer or multiplayer?" << std::endl;
		std::cout << "singleplayer enter: S		multiplayer enter: M" << std::endl;
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == 'S' || choice == 's') {
			std::cout << "---------------Singleplayer----------------" << std::endl;
			do {
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				std::cout << "Enter a number:";
				std::cin >> player1input;
				counter++;
				switch (player1input) {
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
				if (a == 'X' && b == 'X' && c == 'X') {
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
				else if (counter == 9 && exit != 1) {
					std::cout << "The game ended as a draw" << std::endl;
					exit = 1;
				}
				std::cout << std::endl;
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				if (counter != 9 && exit == 0) {
					do {
						std::srand(time(0));
						rng = (std::rand() % 9) + 1;
						if (rng == 1 && a == '1') {
							player2input = 1;
							exit2 = 1;
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
					exit2 = 0;
					counter++;
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
		else if (choice == 'M' || choice == 'm') {
			std::cout << "---------------Multiplayer-----------------" << std::endl;
			std::cout << std::endl;
			std::cout << "Enter name of player 1:" << std::endl;
			std::getline(std::cin, player1name);
			std::cin >> player1name;
			std::cout << "Enter name of player 2:" << std::endl;
			std::getline(std::cin, player2name);
			std::cin >> player2name;
			std::cout << std::endl;
			do {
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				std::cout << player1name << " enter a number:";
				std::cin >> player1input;
				std::cout << std::endl;
				counter++;
				switch (player1input) {
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
				if (a == 'X' && b == 'X' && c == 'X') {
					std::cout << "Congratulation " << player1name << " has won the game" << std::endl;
					exit = 1;
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
				else if (counter == 9 && exit != 1) {
					std::cout << "The game ended as a draw" << std::endl;
					exit = 1;
				}
				std::cout << std::endl;
				std::cout << "|" << a << "|" << b << "|" << c << "|" << std::endl;
				std::cout << "|" << d << "|" << e << "|" << f << "|" << std::endl;
				std::cout << "|" << g << "|" << h << "|" << i << "|" << std::endl;
				std::cout << std::endl;
				if (counter != 9 && exit == 0) {
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
			std::cout << "Invalid input" << std::endl;
		}
		std::cout << "Would you like to play again?" << std::endl;
		std::cout << "For yes enter: 1      For no enter: 2" << std::endl;
		std::cin >> playagain;
		if (playagain == 1) {
			playagain = 0;
		}
		 if (playagain == 2) {
			playagain = 1;
		}
	}while (playagain == 0);
}