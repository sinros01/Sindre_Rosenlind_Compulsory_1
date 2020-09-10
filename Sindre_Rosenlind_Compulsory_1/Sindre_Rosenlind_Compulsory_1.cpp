#include <iostream>
#include <string>

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

	std::cout << "----------Welcome to Tic Tac Toe!----------" << std::endl;
	std::cout << std::endl;
	std::cout << "Would you like to play singleplayer or multiplayer?" << std::endl;
	std::cout << "singleplayer enter: S		multiplayer enter: M" << std::endl;
	std::cin >> choice;
	std::cout << std::endl;
	
	if (choice == 'S' || choice == 's') {
	std::cout << "---------------Singleplayer----------------" << std::endl;




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
		if (counter != 9) {
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
			if (exit ==1) {
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
}