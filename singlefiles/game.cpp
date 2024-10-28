#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void best_score(int guess_count)
{

    std::ifstream input("best_score.txt");
    if (!input.is_open())
    {
        std::cout << "Unable to read high score file!\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if (!output.is_open())
    {
        std::cout << "Unable to rad high score file!\n";
        return;
    }

    if (guess_count < best_score)
    {
        output << guess_count;
    }
    else
    {
        output << best_score;
    }
}

void print_vector(std::vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << '\t';
    }
    std::cout << "\n";
}
void play_game()
{
    std::vector<int> guesses;
    int guess_count = 0;

    int random = rand() % 111;
    std::cout << "Yo, let's play\n";

    while (true)
    {
        int guess;
        std::cout << std::endl;
        std::cin >> guess;
        guesses.push_back(guess);
        guess_count++;

        if (guess == random)
        {
            std::cout << "YEahhh, You win!!! \n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Your guess is low! Number will be high\n";
        }
        else
        {
            std::cout << "Your guess is high! Number will be low\n";
        }
    }

    best_score(guess_count);
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Play Game \n";

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Thanks for choosing nothing\n";
            return 0;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}