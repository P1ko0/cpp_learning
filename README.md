# C++ Learning

This repository records my C++ learning progress and practical exercises.

## Current Goal

Build a foundation for industrial device software development.

Learning path:

C++ → Qt → TCP → Modbus → Industrial Device Software → Motion Control → Robot Control Software

## Week 1 Progress

Completed:

- Basic input and output
- `if` conditions
- `for` loops
- Arrays and `vector`
- Basic `map` practice
- Basic class practice
- CMake build workflow
- Git / GitHub workflow
- File output with `ofstream`
- Append mode with `ios::app`
- File-open error checking
- Timestamp generation
- `stringstream`, `setw`, `setfill`
- Basic CSV output
- Header / source file separation
- Logger module

## Current Review Program

The current review program is `day08_review.cpp`.

It can:

- Input 3 device states
- Store states using `vector<string>`
- Print all device states
- Detect the `fault` state
- Display a fault warning
- Write device states to `log.txt`
- Add timestamps to log records

## Logger

The Logger module is separated into:

- `Logger.h` — declarations
- `Logger.cpp` — implementation

It currently supports:

- Writing logs
- Appending logs
- Adding timestamps
- Checking whether the log file opens successfully

## Build and Run

Configure:

`cmake -S . -B build`

Build:

`cmake --build build --config Debug --target day08_review`

Run:

`.\build\Debug\day08_review.exe`

## Next Step

Continue improving C++ engineering skills and gradually build a complete industrial device monitoring and control program.