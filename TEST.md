# Test Cases

## Test 1

Initial: Idle

Operation: start

Expected: Running

Actual: Running

Result: PASS

## Test 2

Initial: Running

Operation: start

Expected: Invalid, keep Running

Actual: Invalid Running

Result: PASS

## Test 3

Initial: Fault

Operation: start

Expected: Invalid, keep Fault

Actual: Invalid Fault

Result:

## Test 4

Initial: Fault

Operation: reset

Expected: Idle

Actual: Idle

Result: PASS


## Test 5

Initial: Idle

Operation: stop

Expected: Invalid, keep Idle

Actual: Invalid, keep Idle

Result: PASS


## Test 6

Initial: Running

Operation: stop

Expected: Stopped

Actual: Stopped

Result: PASS


## Test 7

Initial: Stopped

Operation: reset

Expected: Idle

Actual: Idle

Result: PASS

## Test 8

Initial: Background thread updates temp and speed, main thread reads them

Operation: Run both threads with the same mutex

Expected: No data race, program runs normally

Actual: Program runs normally, shared data is read and updated with mutex protection

Result: PASS

## Test 9

Initial: Logger_file.txt can be opened

Operation: Call Logger::write("Device started")

Expected: A new log is appended with timestamp and "Device started"

Actual: A new timestamped "Device started" log was appended, old logs were kept

Result: PASS

## Test 10

Initial: Logger_file.txt cannot be opened

Operation: Call Logger::write(...)

Expected: Print "Fail to open!" and program does not crash

Actual: "Fail to open!" was printed and the program continued normally

Result: PASS