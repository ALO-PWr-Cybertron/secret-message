# Secret Message
## Ticket Content

We found these files on our servers. We suspect that they're linked to the ransomware attack, which has infected our server. We believe that what we found are an executable and encrypted message. Decode it as fast as possible and report back.

## Writeup

-   Participant decompiles and analyzes the binary executable (Ghidra, IDA).
-   Participant notices that the difference between 5 last numbers from output is the number of loop iterations at the moment of printing.
-   Participant finds out, that flag is shorter than 32 characters, and last numbers are XORd with NULL byte.
-   Participant calculates the key used to encrypt the message and decrypts the sequence.
-   Participant submits a flag to the ticket system.

Example solution is located in `decrypt.py`.

## Sources

-   [Ghidra SRE Suite](https://ghidra-sre.org/)
