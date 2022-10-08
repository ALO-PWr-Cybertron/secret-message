# Secret Message

## Description

On one of our servers, hackers left a file with encrypted message, which might be helpful while recovering the documents encrypted with ransomware. We've also found file, which was probably used for encryption. Go decrypt the message before it's too late!

## Alternative Ticket Content

We found these files on our servers. We suspect that they're linked to the ransomware attack, which has infected our server. We believe that what we found are an encrypted message and executable, which was probably used for encryption. Decode message as fast as possible and report back.

## Writeup

-   Participant decompiles and analyzes the binary executable (Ghidra, IDA).
-   Participant notices that the difference between 5 last numbers from output is the number of loop iterations at the moment of printing.
-   Participant finds out, that flag is shorter than 32 characters, and last numbers are XORd with NULL byte.
-   Participant calculates the key used to encrypt the message and decrypts the sequence.
-   Participant submits a flag to the ticket system.

Example solution is located in `decrypt.py`.

## Sources

-   [Ghidra SRE Suite](https://ghidra-sre.org/)
