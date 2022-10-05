1. Participant decompiles and analyzes the binaries, eg using ghidra
2. Participant notice that the difference between 5 last numbers from output is the number of loop iterations at moment of printing
3. Participant sees, that flag is shorter than 32 characters, and last numbers are xored with 0
4. Participant calculates randomly generated "key"
5. Participant write script, eg in python, taht recover characters from output using key
6. Participant submit created flag