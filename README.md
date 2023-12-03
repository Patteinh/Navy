# Navy 🚢

Welcome to **Navy**.

Programming challenge that brings the classic Battleship game to the terminal.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** navy

## Project Overview 🔎

The objective is to implement a terminal version of the Battleship game. Players communicate using signals `SIGUSER1` and `SIGUSER2`, and the game is played on an `8x8 grid`. The game continues until all ships of a player have been hit, at which point the winner is declared.

### Usage

`./navy [first_player_pid] navy_positions`

#### DESCRIPTION
- `first_player_pid`: For the 2nd player only, the pid of the first player.
- `navy_positions`: File representing the positions of the ships.

### Game Setup

- The positions file must contain lines formatted as `LENGTH : FIRST_SQUARE : LAST_SQUARE`, where `LENGTH` is the ship's length, and `FIRST_SQUARE` and `LAST_SQUARE` its starting and ending positions.
- Four ships are required, with lengths of 2, 3, 4, and 5.

### Gameplay

Players take turns to attack positions on the opponent's grid. The game displays both the player's and the opponent's grids, indicating hits and misses.

### Examples

```
SCREEN1:
p1@p1:~ ./navy pos
my_pid: 8737
waiting for enemy connection...

enemy connected

my positions:
 |A B C D E F G H
-+---------------
1|. . 2 . . . . .
2|. . 2 . . . . .
3|. . . . . . . .
4|. . . 3 3 3 . .
5|. 4 . . . . . .
6|. 4 . . . . . .
7|. 4 . 5 5 5 5 5
8|. 4 . . . . . .

enemy's positions:
 |A B C D E F G H
-+---------------
1|. . . . . . . .
2|. . . . . . . .
3|. . . . . . . .
4|. . . . . . . .
5|. . . . . . . .
6|. . . . . . . .
7|. . . . . . . .
8|. . . . . . . .

attack: D1
D1: hit

waiting for enemy's attack...
A1: missed

my positions:
 |A B C D E F G H
-+---------------
1|o . 2 . . . . .
2|. . 2 . . . . .
3|. . . . . . . .
4|. . . 3 3 3 . .
5|. 4 . . . . . .
6|. 4 . . . . . .
7|. 4 . 5 5 5 5 5
8|. 4 . . . . . .

enemy's positions:
 |A B C D E F G H
-+---------------
1|. . . x . . . .
2|. . . . . . . .
3|. . . . . . . .
4|. . . . . . . .
5|. . . . . . . .
6|. . . . . . . .
7|. . . . . . . .
8|. . . . . . . .

attack:

-------------------------------------------------------------------------

SCREEN2:
p2@p2:~ ./navy 8737 pos
my_pid: 8738
successfully connected

my positions:
 |A B C D E F G H
-+---------------
1|. . . 2 . . . .
2|. . . 2 . . . .
3|. . . . . . . .
4|3 3 3 . . . . .
5|. . 4 . . . . .
6|. . 4 5 5 5 5 5
7|. . 4 . . . . .
8|. . 4 . . . . .

enemy's positions:
 |A B C D E F G H
-+---------------
1|. . . . . . . .
2|. . . . . . . .
3|. . . . . . . .
4|. . . . . . . .
5|. . . . . . . .
6|. . . . . . . .
7|. . . . . . . .
8|. . . . . . . .

waiting for enemy's attack...
D1: hit

attack: A1
A1: missed

my positions:
 |A B C D E F G H
-+---------------
1|. . . x . . . .
2|. . . 2 . . . .
3|. . . . . . . .
4|3 3 3 . . . . .
5|. . 4 . . . . .
6|. . 4 5 5 5 5 5
7|. . 4 . . . . .
8|. . 4 . . . . .

enemy's positions:
 |A B C D E F G H
-+---------------
1|o . . . . . . .
2|. . . . . . . .
3|. . . . . . . .
4|. . . . . . . .
5|. . . . . . . .
6|. . . . . . . .
7|. . . . . . . .
8|. . . . . . . .

waiting for enemy's attack...
```

## Authorized Functions

Allowed system calls include `open`, `close`, `read`, `write`, `lseek`, `malloc`, `free`, `getpid`, `kill`, `signal`, `sigaction`, `sigemptyset`, `setcontext`, `getcontext`, `usleep`, `nanosleep`, `pause`, `getline`, `fopen`, and `fclose`.

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Start a game by running `./navy`.
4. For detailed guidelines, refer to `navy.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.
