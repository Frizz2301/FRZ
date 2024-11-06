#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

struct Player {
    std::string name;
    int position;
};

struct Board {
    int snakes[101];
    int ladders[101];
};

void initializeBoard(Board &board) {
    for (int i = 0; i <= 100; i++) {
        board.snakes[i] = i; // Default to no snake
        board.ladders[i] = i; // Default to no ladder
    }
    // Contoh posisi ular
    board.snakes[16] = 6;
    board.snakes[47] = 26;
    board.snakes[49] = 11;
    board.snakes[56] = 53;
    board.snakes[62] = 19;
    board.snakes[87] = 24;
    board.snakes[93] = 73;
    board.snakes[95] = 75;
    board.snakes[98] = 78;

    // Contoh posisi tangga
    board.ladders[1] = 38;
    board.ladders[4] = 14;
    board.ladders[9] = 31;
    board.ladders[21] = 42;
    board.ladders[28] = 84;
    board.ladders[51] = 67;
    board.ladders[72] = 91;
    board.ladders[80] = 100;
}

int rollDice() {
    return rand() % 6 + 1; // Angka antara 1-6
}

void displayPosition(const Player &player) {
    std::cout << player.name << " is now on square " << player.position << std::endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    int numPlayers;
    std::cout << "Enter number of players (2 or more): ";
    std::cin >> numPlayers;

    if (numPlayers < 2) {
        std::cout << "At least 2 players are required!" << std::endl;
        return 1;
    }

    Player players[10]; // Maksimal 10 pemain
    for (int i = 0; i < numPlayers; i++) {
        std::cout << "Enter name for player " << (i + 1) << ": ";
        std::cin >> players[i].name;
        players[i].position = 0; // Inisialisasi posisi pemain
    }

    Board board;
    initializeBoard(board);

    bool gameWon = false;
    int currentPlayerIndex = 0;

    while (!gameWon) {
        Player &currentPlayer = players[currentPlayerIndex];
        std::cout << currentPlayer.name << "'s turn. Press Enter to roll the dice...";
        std::cin.ignore();
        std::cin.get(); // Tunggu input dari pengguna

        int diceRoll = rollDice();
        std::cout << currentPlayer.name << " rolled a " << diceRoll << std::endl;

        int newPosition = currentPlayer.position + diceRoll;

        if (newPosition > 100) {
            std::cout << currentPlayer.name << " rolled too high and stays on square " << currentPlayer.position << std::endl;
        } else {
            currentPlayer.position = board.ladders[board.snakes[newPosition]]; // Pindah ke posisi baru
            displayPosition(currentPlayer);

            // Cek jika pemain menang
            if (currentPlayer.position == 100) {
                gameWon = true;
                std::cout << currentPlayer.name << " wins!" << std::endl;
            }
        }

        // Pindah ke pemain berikutnya
        currentPlayerIndex = (currentPlayerIndex + 1) % numPlayers;
    }

    return 0;
}