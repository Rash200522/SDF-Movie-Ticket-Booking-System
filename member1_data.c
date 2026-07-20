#include <stdio.h>
#include <string.h>
#include "member1_data.h"

Showtime showtimes[MAX_MOVIES * MAX_SHOWTIMES];

void initializeData()
{
    strcpy(showtimes[0].movieName, "Avengers: Endgame");
    strcpy(showtimes[0].time, "3:00 PM");

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            showtimes[0].seatMap[i][j] = '.';
        }
    }

    printf("Data initialized successfully!\\n");
}