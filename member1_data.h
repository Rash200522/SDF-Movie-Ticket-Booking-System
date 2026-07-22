#ifndef MEMBER1_DATA_H
#define MEMBER1_DATA_H

// ==========================================
// CONSTANT DEFINITIONS
// ==========================================

#define ROWS 5                      // Number of rows (A-E)
#define COLS 10                     // Number of seats per row
#define MAX_MOVIES 3                // Total movies
#define MAX_SHOWTIMES 2             // Showtimes per movie
#define MAX_BOOKINGS 100            // Maximum bookings
#define MAX_NAME_LEN 50             // Customer name length

// ==========================================
// ENUMERATION - Seat Tiers
// ==========================================

typedef enum {
    REGULAR,    // Rows A-B
    PREMIUM,    // Rows C-D
    VIP         // Row E
} SeatTier;

// ==========================================
// STRUCTURE - Booking
// ==========================================

typedef struct {
    int row;                        // Row index (0-4)
    int col;                        // Column index (0-9)
    char customerName[MAX_NAME_LEN]; // Customer name
    float pricePaid;               // Final price
    int isStudent;                 // 1 if student
    int isSenior;                  // 1 if senior
    int isGroup;                   // 1 if group booking
    int groupSize;                 // Number in group
    int isActive;                  // 1 if active booking
} Booking;

// ==========================================
// STRUCTURE - Showtime
// ==========================================

typedef struct {
    char movieName[MAX_NAME_LEN];   // Movie title
    char time[MAX_NAME_LEN];         // Show time
    char seatMap[ROWS][COLS];       // Seat grid
    Booking bookings[MAX_BOOKINGS]; // All bookings
    int bookingCount;               // Number of bookings
    float totalRevenue;             // Total revenue
    int totalTicketsSold;           // Total tickets sold
} Showtime;

// ==========================================
// GLOBAL VARIABLES (Shared with everyone)
// ==========================================

extern Showtime showtimes[MAX_MOVIES * MAX_SHOWTIMES];
extern int showtimeCount;

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================

void initializeData();
void displayMovieInfo();
void displayAllShowtimes();  // NEW: Shows ALL showtimes

#endif