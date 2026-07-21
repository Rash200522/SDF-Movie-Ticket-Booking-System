#ifndef MEMBER1_DATA_H
#define MEMBER1_DATA_H

#define ROWS 5
#define COLS 10
#define MAX_MOVIES 3
#define MAX_SHOWTIMES 2

typedef struct {
    char movieName[50];
    char time[20];
    char seatMap[ROWS][COLS];
} Showtime;

void initializeData();
void displayMovieInfo();

#endif