# Secret message

## Description
On one of our servers hackers left file with encrypted message, which may prove helpful while decrypting machine infected with ransomware. We've also found file, which have probably been used for encryption. Go decrypt message before it's too late!

## Alternative ticket content
We've found those files on our servers. We suspect that they're linked to ransomware attack, which have infected our servers. We believe that what we've found are: encrypted message and binary, which have probably been used for encryption. Decode message as fast as possible and report back. 

## Writeup
- Participant decompiles and analyzes the binaries, f.e. using ghidra
- Participant notices that the difference between 5 last numbers from output is the number of loop iterations at moment of printing
- Participant finds out, that flag is shorter than 32 characters, and last numbers are xored with 0
- Participant calculates randomly generated "key"
- Participant writes script, f.e. in python to recover characters from output using key
- Participant constructs flag: CyberTron22{aes_d0_th3_j08}

Example solving script is located in `decrypt.py`

## Sources
- [Ghidra SRE Suite](https://ghidra-sre.org/)
