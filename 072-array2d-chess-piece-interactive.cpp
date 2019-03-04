// EXERCISE 07.2
//
// File name: 072-array2d-chess-piece-interactive.cpp
//
// Description:
// Write an interactive program to implement a chess[1] board
// where the user can move[2] the black King piece on board. After
// each move, display the piece's position in a grid. The chess board
// is 8 x 8. Use "x" to mark the piece.
//
// Example output:
//     +---+---+---+---+---+---+---+
//   8 | x |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   7 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   6 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   5 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   4 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   3 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   2 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//   1 |   |   |   |   |   |   |   |
//     +---+---+---+---+---+---+---+
//       a   b   c   d   f   g   h
//
// [1] https://en.wikipedia.org/wiki/Chess
// [2] To read coordinates from user, use "cin", or
// gets() function from the standard input output library
// http://www.cplusplus.com/reference/cstdio/gets/
//
// ****************************************************************
//
// INSTRUCTIONS
// - Input 'U', Enter to move up
// - Input 'D', Enter to move down
// - Input 'L', Enter to move left
// - Input 'R', Enter to move right
// - Input 'X' or 'Q', Enter to exit the program

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void drawBoard(const int[][8], const int, const int, const char);
bool isExitChar(const char);

int main()
{
    const char playerMark = 'x';

    int playerX = 0;
    int playerY = 0;

    int chess[8][8];
    for (int y = 0; y < 8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            chess[y][x] = 0;
        }
    }
    chess[playerY][playerX] = 1;

    drawBoard(chess, 8, 8, playerMark);

    char input[20];
    char inputFirstChar = '0';
    while (!isExitChar(inputFirstChar))
    {
        // Takes player input
        cin >> input;
        if (strlen(input) > 0)
        {
            inputFirstChar = input[0];
        }
        else
        {
            inputFirstChar = '0';
        }

        // Checks the player input and moves the chess piece
        chess[playerY][playerX] = 0;
        if (toupper(inputFirstChar) == 'U' && playerY > 0)
        {
            playerY--;
        }
        else if (toupper(inputFirstChar) == 'D' && playerY < 8 - 1)
        {
            playerY++;
        }
        else if (toupper(inputFirstChar) == 'L' && playerX > 0)
        {
            playerX--;
        }

        else if (toupper(inputFirstChar) == 'R' && playerX < 8 - 1)
        {
            playerX++;
        }
        chess[playerY][playerX] = 1;

        // Updates the game board
        drawBoard(chess, 8, 8, playerMark);
    }

    return 0;
}

void drawBoard(const int board[][8],
               const int sizeX,
               const int sizeY,
               const char playerMark)
{
    // Top border
    printf("%3c", '+');
    for (int x = 0; x < sizeX; x++)
    {
        cout << "---+";
    }
    cout << endl;

    for (int y = 0; y < sizeY; y++)
    {
        // Row number and left border
        printf("%-2d|", sizeY - y);

        // Squares and column separators
        for (int x = 0; x < sizeX; x++)
        {
            switch (board[y][x])
            {
                case 1:
                {
                    printf("%2c%2c", playerMark, '|');
                    break;
                }
                default:
                {
                    printf("%4c", '|');
                    break;
                }
            }
        }
        cout << endl;

        // Row separator
        printf("%3c", '+');
        for (int x = 0; x < sizeX; x++)
        {
            cout << "---+";
        }
        cout << endl;
    }

    // Column letters
    printf("%5c%4c%4c%4c%4c%4c%4c%4c\n",
           'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h');
}

bool isExitChar(const char character)
{
    return (toupper(character) == 'X' || toupper(character) == 'Q');
}

// End of file