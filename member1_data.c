#include <stdio.h>
#include <string.h>
#include "member1_data.h"

// GLOBAL VARIABLES DEFINITION

Showtime showtimes[MAX_MOVIES * MAX_SHOWTIMES];

int showtimeCount = 0;


// FUNCTION: initializeData
// Creates ALL 6 showtimes with ALL data

void initializeData()
{
    // MOVIE 1: Avengers: Endgame

    strcpy(showtimes[0].movieName, "Avengers: Endgame");
    strcpy(showtimes[0].time, "3:00 PM");
    memset(showtimes[0].seatMap, '.', ROWS * COLS);
    showtimes[0].bookingCount = 0;
    showtimes[0].totalRevenue = 0;
    showtimes[0].totalTicketsSold = 0;


    strcpy(showtimes[1].movieName, "Avengers: Endgame");
    strcpy(showtimes[1].time, "7:00 PM");
    memset(showtimes[1].seatMap, '.', ROWS * COLS);
    showtimes[1].bookingCount = 0;
    showtimes[1].totalRevenue = 0;
    showtimes[1].totalTicketsSold = 0;


    // MOVIE 2: Inception

    strcpy(showtimes[2].movieName, "Inception");
    strcpy(showtimes[2].time, "2:00 PM");
    memset(showtimes[2].seatMap, '.', ROWS * COLS);
    showtimes[2].bookingCount = 0;
    showtimes[2].totalRevenue = 0;
    showtimes[2].totalTicketsSold = 0;


    strcpy(showtimes[3].movieName, "Inception");
    strcpy(showtimes[3].time, "6:30 PM");
    memset(showtimes[3].seatMap, '.', ROWS * COLS);
    showtimes[3].bookingCount = 0;
    showtimes[3].totalRevenue = 0;
    showtimes[3].totalTicketsSold = 0;


    // MOVIE 3: The Dark Knight

    strcpy(showtimes[4].movieName, "The Dark Knight");
    strcpy(showtimes[4].time, "4:30 PM");
    memset(showtimes[4].seatMap, '.', ROWS * COLS);
    showtimes[4].bookingCount = 0;
    showtimes[4].totalRevenue = 0;
    showtimes[4].totalTicketsSold = 0;


    strcpy(showtimes[5].movieName, "The Dark Knight");
    strcpy(showtimes[5].time, "9:00 PM");
    memset(showtimes[5].seatMap, '.', ROWS * COLS);
    showtimes[5].bookingCount = 0;
    showtimes[5].totalRevenue = 0;
    showtimes[5].totalTicketsSold = 0;


    showtimeCount = 6;


    printf("Data initialized successfully!\n");
    printf("Created %d showtimes\n", showtimeCount);
    printf("Total seats: %d\n\n", showtimeCount * ROWS * COLS);
}



// FUNCTION: displayMovieInfo

void displayMovieInfo()
{
    printf("\n========================================\n");
    printf("FIRST MOVIE DETAILS\n");
    printf("========================================\n");

    printf("\nMovie Name : %s\n", showtimes[0].movieName);
    printf("Show Time  : %s\n\n", showtimes[0].time);


    printf("Seat Map (First Showtime):\n");

    printf("    ");
    for(int j = 0; j < COLS; j++)
    {
        printf("%2d ", j + 1);
    }

    printf("\n");


    for(int i = 0; i < ROWS; i++)
    {
        printf("%c   ", 'A' + i);

        for(int j = 0; j < COLS; j++)
        {
            printf(" %c ", showtimes[0].seatMap[i][j]);
        }

        printf("\n");
    }

    printf("\n========================================\n");
}



// FUNCTION: displayAllShowtimes

void displayAllShowtimes()
{
    printf("\n========================================\n");
    printf("ALL SHOWTIMES (%d total)\n", showtimeCount);
    printf("========================================\n\n");


    printf("SHOWTIME LIST:\n");
    printf("--------------\n");


    for(int i = 0; i < showtimeCount; i++)
    {
        printf("%d. %-20s at %s\n",
               i + 1,
               showtimes[i].movieName,
               showtimes[i].time);
    }


    printf("\n\nSEAT MAPS FOR EACH SHOWTIME:\n");
    printf("============================\n");


    for(int s = 0; s < showtimeCount; s++)
    {
        printf("\nShowtime %d: %s at %s\n",
               s + 1,
               showtimes[s].movieName,
               showtimes[s].time);


        printf("Legend: . = Available\n\n");


        printf("    ");

        for(int j = 0; j < COLS; j++)
        {
            printf("%2d ", j + 1);
        }

        printf("\n");


        for(int i = 0; i < ROWS; i++)
        {
            printf("%c   ", 'A' + i);

            for(int j = 0; j < COLS; j++)
            {
                printf(" %c ", showtimes[s].seatMap[i][j]);
            }

            printf("\n");
        }
    }


    printf("\n========================================\n");
    printf("SUMMARY:\n");
    printf("  - Total Showtimes: %d\n", showtimeCount);
    printf("  - Total Movies: 3\n");
    printf("  - Total Seats: %d\n", showtimeCount * ROWS * COLS);
    printf("  - All seats are available (.)\n");
    printf("========================================\n");
}