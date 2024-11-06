struct Player {
    std::string name;
    int position; // Posisi pemain di papan
};

struct Board {
    int snakes[101]; // Posisi awal ular
    int ladders[101]; // Posisi awal tangga
};
