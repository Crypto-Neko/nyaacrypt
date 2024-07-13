#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants for the AES algorithm
#define Nb 4  // Number of columns in the state
#define Nk 4  // Number of 32-bit words in the key
#define Nr 10 // Number of rounds

typedef uint8_t state_t[4][4];
