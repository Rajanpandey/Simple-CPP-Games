# Simple games using C++17
1. Bulls and Cows: The user needs to guess a particular 4 letter word or a 4 digit number. He is continously informed about the number of letters guessed right but at wrong places, and the number of letters guessed at the right placed, until the correct string is guessed. Both letters and numbers are supported.

2. Tic Tac Toe (Human Player vs Human Player): O-X game for 2 human players. Player 1 is assigned O and Player 2 is assigned X.

3. Tic Tac Toe (Human Player Vs Computer): A simple single player O-X game against computer. The computer always plays the first move. The player is given a choice to choose from O or X character. The Computer NEVER loses.

4. Snake: Simple snake game with a size of 20x20. Consuming the targets increases the size of the snake by 1 block. The target is denoted by Pi and is randomly generated at different instance of time. The speed of the snake keeps increasing after the multiples of score of 5 until 25, then it becomes blazing fast and remains constant.
Hitting yourself (possible if snake size is 5 or more) results in game over.
Hitting the boundary wall results in game over as well. To disable it and teleport through the other side while hitting the wall, uncomment the conditional statements from line 137 to 143 and comment out the conditional statement from line 134 to 136.

5. Fictional Character Battle To Death: Inspired by the battle system in Pokemon games by Nintendo, both the characters have their own stats like health, attack and defence utilizing which they will fight to death.
