// Final Project
// Isabella Wykowski

//Imported libraries in CPP
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;



// Declaring Variables
bool validCoordinate()
{
    return false;
}
void SetBoard()
{
}
MyReadFile.close()
{
    return MyReadFile .();
}
bool checkIfPlayerWon(std::vector<std::vector<int>>& v, int player)
{
    return false;
}
void SetBoard();
void PrintBoard()


// Game Message
cout << "**********WELCOME TO THE TIC TAC TOE GAME**********\n"; >> endl

// Reading and writing of data to a file
int main() {
    // Create and open a text file
    ofstream MyFile("rules.txt");

    string myText;
    // Read from the text file
    ifstream MyReadFile("rules.txt");

    while (getline(MyReadFile, myText)) {
        cout << myText;
    }
    // Close the file
    MyReadFile.close();
}

// Inheritance w/polymorphism?
class TicTacToe
{
private:
    // Dynamic memory
    int* dynamicArray1 = new int[3][3] {1, 2, 3}
    {4, 5, 6}
    {7, 8, 9};

public:
    TicTacToe() {}

    //Organizing our board for the game
    void SetBoard()
    {
        int q = 1;
        int m = 0;
        int k = 0;

        for (m = 0; m < 3; m++)
        {
            for (k = 0; k < 3; k++)
            {
                board[m][k] = '0' + q;
                n++;
            }
        }
    } //End SetBoard

    //here we attempt to print out the board
    void PrintBoard()
    {
        int m = 0;
        int k = 0;

        for (m = 0; m < 3; m++)
        {
            // User defined function for searching?
            int search(int, int size, int num)
                for (k = 0; k < 3; k++)
                {
                    if (k < 2)
                    {
                        cout << board[m][k] << "  |  ";
                    }
                    else
                    {
                        cout << board[m][k] << endl;
                    }
                }
        }
    } //End PrintBoard Table
}



// I/O
int main() {
    char name[50];

    cout << "Please enter your name: " << name;
    cin >> name; << endl;



    // Base class
    class Player {
    public:
        string position = "Player 1,";
    };

    // Derived class
    class Game : public Player {
    public:
        string letter = " is X";
    };

    int main() {
        Game myGame;
        cout << myGame.position + name + myGame.letter;
        return 0;
    }
}


// Exception-handling
public static void GetXYCoordinates(ref int xCoordinate, ref int yCoordinate)
{
    bool validCoordinate = true;

    do
    {       // User inputs X/Y coordinate for their game position
        Console.Write("Enter x coordinate: ");
        GetCoordinate(ref validCoordinate, ref xCoordinate);

        if (validCoordinate)
        {
            Console.Write("Enter y coordinate: ");
            GetCoordinate(ref validCoordinate, ref yCoordinate);
        }

        Console.WriteLine();
    } while (!validCoordinate);
    
}

private static void GetCoordinate(ref bool validCoordinate, ref int coordinate)
{
    try
    {
        coordinate = int.Parse(Console.ReadLine());
    }
    catch
    {
        Console.WriteLine("Invalid coordinates, please try again.");
        validCoordinate = false;
        return;
    }
    // If user enters wrong number it will instruct them to enter a different number
    if (coordinate < 1 || coordinate > 3)
    {
        validCoordinate = false;
        Console.WriteLine("Invalid coordinates, please try again.");
    }
}






// composition



// user-defined template class


// Sorting

// Standard Template Library container used in an iteration of its contents
bool checkIfPlayerWon(std::vector<std::vector<int>>& v, int player);

void logic(std::vector<std::vector<int>>& v) {
    if (checkIfPlayerWon(v, 1)) {
        std::cout << "USER 1 (X) IS THE WINNER :D\n";
        GameOver = true;
    }
    else if (checkIfPlayerWon(v, -1)) {
        std::cout << "USER 0 (O) IS THE WINNER :D\n";
        GameOver = true;
    }
    else if (!checkDraw(v)) {
        std::cout << "DRAW :-(\n";
        GameOver = true;
    }
}







