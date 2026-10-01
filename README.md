# Rock Paper Scissors

A small command-line Rock–Paper–Scissors game written in C. Choose between a single-player game against a random computer move and a two-player game on the same computer.

## Run on Windows

A prebuilt executable is included:

```powershell
.\main.exe
```

The program uses the Windows console `cls` command to clear the screen.

## Build from source

With GCC installed, compile the source from the repository root:

```powershell
gcc main.c -o main.exe
.\main.exe
```

The game logic and input helpers are in `lib.h`; the entry point is `main.c`.

## Game modes

- **Player vs. computer:** the computer selects a random move.
- **Player vs. player:** two people enter moves using the same console.

Choose Rock, Paper, or Scissors with the numbered prompts in the game.
