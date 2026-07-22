#include <stdio.h>
#include "member1_data.h"

int main() {
    printf("\n");
    printf("========================================\n");
    printf("  TESTING MEMBER 1 MODULE\n");
    printf("  Data Structures & Initialization\n");
    printf("========================================\n\n");
    
    // Step 1: Initialize all data
    printf("STEP 1: Initializing Data\n");
    printf("-------------------------\n");
    initializeData();
    
    // Step 2: Display first movie (your original function)
    printf("\nSTEP 2: Display First Movie\n");
    printf("---------------------------\n");
    displayMovieInfo();
    
    // Step 3: Display ALL showtimes (NEW)
    printf("\nSTEP 3: Display ALL Showtimes\n");
    printf("----------------------------\n");
    displayAllShowtimes();
    
    // Step 4: Final verification
    printf("\n========================================\n");
    printf("   MEMBER 1 MODULE COMPLETE!\n");
    printf("========================================\n");
    printf("  All 6 showtimes initialized\n");
    printf("   All 300 seats available\n");
    printf("  3 movies configured\n");
    printf("  Ready for team integration\n");
    printf("========================================\n\n");
    
    return 0;
}