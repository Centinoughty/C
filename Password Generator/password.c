#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int count;
    char charecters [] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    , 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    , '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'
    , '!', '@', '#', '$', '%', '^', '&', '*', '(', ')'
    , '-', '=', '_', '+'};
    char password [50] = {};
    srand(time(NULL));
    count = rand() % 32 + 8;
    if (count > 32)
    {
        count = 32;
    }
    

    for (int i = 0; i < count; i++)
    {
        int position = rand() % strlen(charecters);
        printf("%c", charecters[position]);
    }
    
    printf("%s", &password);
    return 0;
    
}
