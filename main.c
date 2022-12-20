#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define MAX_COUNT 20


void init()
{
    srand(clock());
}

int64_t get_rand()
{
    return( rand() % 20 + 1 );
}

uint8_t get_rand_calc_char()
{
    switch ( rand() % 4 )
    {
        case 0 : return( '+' );
        case 1 : return( '-' );
        case 2 : return( '*' );
        default : return( '/' );
    }
}

void new_call_prob()
{
    // init.
    static uint8_t count = 0;
    
    
    // run.
    uint64_t first = get_rand();
    int8_t ch = get_rand_calc_char();
    uint64_t second = get_rand();


    
    printf("\n [%d/%d] %d %c %d = ", ++count, MAX_COUNT,  first, ch, second);
}

int main()
{
    while ( 1 )
    {

    }


    return( 0 );
}