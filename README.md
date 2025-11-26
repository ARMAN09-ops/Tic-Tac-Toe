# 🎮 Tic Tac Toe Game  
*A Console-Based Multiplayer Game in C*

---

## 📘 Overview
This project is a **classic Tic Tac Toe game** implemented in the C programming language.  
It is a **two-player turn-based game** where Player 1 plays with **X** and Player 2 plays with **O**.  
The game continues until one player wins or the board becomes full (resulting in a draw).

---

## ✨ Features
- Simple and clean user interface
- Two-player gameplay
- Validates invalid or repeated moves
- Detects wins across rows, columns, and diagonals
- Detects draw conditions
- Easy-to-understand function structure

---

## 📂 File Structure
```
📁 TicTacToe
│
├── tictactoe.c     // Main source code
└── README.md        // Documentation
```

---

## 🧠 Game Logic
- 'X' → Player 1  
- 'O' → Player 2  
- ' ' → Empty cell  

---

### Winning conditions:
- Same symbol in any row  
- Same symbol in any column  
- Same symbol in diagonal (2 possibilities)

---

## 🕹️ How to Play
1. Run the program.
2. The board will be shown on the screen.
3. Players enter **row and column numbers** between 1 and 3.
4. Board updates immediately with the move.
5. Game ends when:
   - A player wins  
   - The board becomes full (draw)

---

## 🛠️ How to Compile & Run
### Using GCC:
```
gcc tictactoe.c -o tictactoe
./tictactoe
```

---

## 🔍 Functions Explained
| Function | Purpose |
|----------|---------|
| initializeBoard() | Sets the board with empty spaces |
| printBoard() | Displays the current game board |
| checkWin() | Checks if a player has won |
| isFull() | Checks if board is full (draw) |
| main() | Game loop, input, and turn switching |

---

## 🎓 Learning Outcomes
- 2D arrays  
- Function creation  
- Game logic  
- Input validation  
- Clean program structure  

---

## 📄 License
This project is free to use, modify, and submit for academic purposes.

---

## 🧑‍💻Author
M.D. Arman

## OUTPUT
