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

int64_t calc_func(uint64_t first, uint64_t second, uint8_t calc_char)
{
    switch ( calc_char )
    {
        case '+' : return( first + second );
        case '-' : return( first - second );
        case '*' : return( first * second );
        default : return( first / second );
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
    int64_t get_input_num = 0;
    int64_t answer = calc_func(first, second, ch);


    
    printf("\n [%d/%d] %d %c %d = ", ++count, MAX_COUNT,  first, ch, second);
    scanf("%d", &get_input_num);

    // answer check.
    if ( get_input_num == answer )
    {
        printf("\n Correct!\n");
    }
    else
    {
        printf("\n Wrong! Answer is %d.\n", answer);
    }
}

int main()
{
    while ( 1 )
    {

    }


    return( 0 );
}