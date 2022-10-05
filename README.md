# Secret message

## Description
Hackers left on one of out servers file with encrypted message that may be helpful with decrypting machine infected by ransomware. Your teammates have also found the file, that have been probably used for encryption. Go and decrypt message before it's too late!

## Writeup
- Participant decompiles and analyzes the binaries, eg using ghidra
- Participant notice that the difference between 5 last numbers from output is the number of loop iterations at moment of printing
- Participant sees, that flag is shorter than 32 characters, and last numbers are xored with 0
- Participant calculates randomly generated "key"
- Participant write script, eg in python, taht recover characters from output using key
- Participant construct flag: CyberTron22{aes_d0_th3_j08}

Example solving script is located in `decrypt.py`