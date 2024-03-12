#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
	
	srand(time(NULL)); // to make sure random number isn't the same every 		time

    std::cout << "Guessing game\nGuess the right number between 0-50 you have 5 chances\n";
	std::string name[2];
	
	std::cout<< "Enter Player 1 name: ";
	std::cin>>name[0];

	std::cout<< "Enter Player 2 name: ";
	std::cin>>name[1];

	int win1 = 0;
	int win2 = 0;
	
    while (true) {

	
    int guess, menu, player;
	int max = 0;
	int count = 1;

    std::cout << "Enter 0 to QUIT\nEnter 1 to PLAY\nEnter 2 to VIEW SCORE\n";
    std::cin >> menu;

		if (menu == 0) {
            std::cout << "Ending the game!\n";
            break;			
        } 
			
        else if (menu == 1) { 
			int key = rand() % 51;
			std::cout<< "CHOOSE PLAYER\nEnter 1 for " <<name[0]<< "\nEnter 2 for "<<name[1]<< ": \n";
			std::cin>> player;

			if(player == 1){	
			std::cout<< "Player " <<name[0]<<std::endl;;
            while (max < 5) { 
                std::cout << "Enter guess: ";
                std::cin >> guess;
				    
                if (guess == key) {
                    std::cout << "CORRECT " << key << " is the right answer."<< "You took " <<count<< " out of 5 tries to get it right\n";
					win1++;
                    break;
                } 
				else if (guess > key) {	
                    std::cout << "Too high \n";
                }
				else if (guess < key) {
                    std::cout << "Too low \n";
                }
                max++;
				count++;
			if (max == 5) {
                std::cout << "GAMEOVER " << key << " is the right answer.\n";
			}
            }
			}
			else if(player==2){
				std::cout<< "Player " <<name[1]<<std::endl;;
				while (max < 5) {
                std::cout << "Enter guess: ";
                std::cin >> guess;
				    
                if (guess == key) {
                    std::cout << "CORRECT " << key << " is the right answer."<< "You took " <<count<< " out of 5 tries to get it right\n";
					win2++;
                    break;
                } 
				else if (guess > key) {	
                    std::cout << "Too high \n";
                }
				else if (guess < key) {
                    std::cout << "Too low \n";
                }
                max++;
				count++;	

			if (max == 5) {
                std::cout << "GAME OVER " << key << " is the right answer.\n";
			}         
            }
     } 
    }
	else if(menu == 2){
		std::cout<< "LEADERBOARD"<<std::endl;
		std::cout<< name[0]<< " = "<< win1<< std::endl;
		std::cout<< name[1]<< " = "<< win2<< std::endl;
	}
	else{
        std::cout << "Invalid input\n";
		}
}
}
