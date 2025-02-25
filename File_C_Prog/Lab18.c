#include <stdio.h>

#define AVAILABLE 0
#define BOOKED 1

/* Function to display available rooms */
void displayAvailableRooms(int room1, int room2, int room3, int room4, int room5) {
    printf("\n===== Available Meeting Rooms =====\n");

    printf("Meeting Room 1: ");
    if (room1 == AVAILABLE) {
        printf("Available\n");
    } else {
        printf("Not Available\n");
    }

    printf("Meeting Room 2: ");
    if (room2 == AVAILABLE) {
        printf("Available\n");
    } else {
        printf("Not Available\n");
    }

    printf("Meeting Room 3: ");
    if (room3 == AVAILABLE) {
        printf("Available\n");
    } else {
        printf("Not Available\n");
    }

    printf("Meeting Room 4: ");
    if (room4 == AVAILABLE) {
        printf("Available\n");
    } else {
        printf("Not Available\n");
    }

    printf("Meeting Room 5: ");
    if (room5 == AVAILABLE) {
        printf("Available\n");
    } else {
        printf("Not Available\n");
    }

    printf("==================================\n");
}

/* Function to get booker name character by character */
void getBookerName(int roomNumber,
                   char *room1_name1, char *room1_name2, char *room1_name3, char *room1_name4, char *room1_name5,
                   char *room2_name1, char *room2_name2, char *room2_name3, char *room2_name4, char *room2_name5,
                   char *room3_name1, char *room3_name2, char *room3_name3, char *room3_name4, char *room3_name5,
                   char *room4_name1, char *room4_name2, char *room4_name3, char *room4_name4, char *room4_name5,
                   char *room5_name1, char *room5_name2, char *room5_name3, char *room5_name4, char *room5_name5) {
    char c;
    int index;

    printf("Please enter your name (max 5 characters): ");

    /* Clear buffer */
    while ((c = getchar()) != '\n' && c != EOF);

    /* Get name character by character (max 5 chars) */
    if (roomNumber == 1) {
        *room1_name1 = getchar();
        *room1_name2 = getchar();
        *room1_name3 = getchar();
        *room1_name4 = getchar();
        *room1_name5 = getchar();
        printf("Successfully booked Meeting Room 1. Booker name: %c%c%c%c%c\n",
               *room1_name1, *room1_name2, *room1_name3, *room1_name4, *room1_name5);
    }
    else if (roomNumber == 2) {
        *room2_name1 = getchar();
        *room2_name2 = getchar();
        *room2_name3 = getchar();
        *room2_name4 = getchar();
        *room2_name5 = getchar();
        printf("Successfully booked Meeting Room 2. Booker name: %c%c%c%c%c\n",
               *room2_name1, *room2_name2, *room2_name3, *room2_name4, *room2_name5);
    }
    else if (roomNumber == 3) {
        *room3_name1 = getchar();
        *room3_name2 = getchar();
        *room3_name3 = getchar();
        *room3_name4 = getchar();
        *room3_name5 = getchar();
        printf("Successfully booked Meeting Room 3. Booker name: %c%c%c%c%c\n",
               *room3_name1, *room3_name2, *room3_name3, *room3_name4, *room3_name5);
    }
    else if (roomNumber == 4) {
        *room4_name1 = getchar();
        *room4_name2 = getchar();
        *room4_name3 = getchar();
        *room4_name4 = getchar();
        *room4_name5 = getchar();
        printf("Successfully booked Meeting Room 4. Booker name: %c%c%c%c%c\n",
               *room4_name1, *room4_name2, *room4_name3, *room4_name4, *room4_name5);
    }
    else if (roomNumber == 5) {
        *room5_name1 = getchar();
        *room5_name2 = getchar();
        *room5_name3 = getchar();
        *room5_name4 = getchar();
        *room5_name5 = getchar();
        printf("Successfully booked Meeting Room 5. Booker name: %c%c%c%c%c\n",
               *room5_name1, *room5_name2, *room5_name3, *room5_name4, *room5_name5);
    }

    /* Clear remaining characters in buffer */
    while ((c = getchar()) != '\n' && c != EOF);
}

/* Function to display all booking records */
void displayBookingRecords(int room1, int room2, int room3, int room4, int room5,
                          char room1_name1, char room1_name2, char room1_name3, char room1_name4, char room1_name5,
                          char room2_name1, char room2_name2, char room2_name3, char room2_name4, char room2_name5,
                          char room3_name1, char room3_name2, char room3_name3, char room3_name4, char room3_name5,
                          char room4_name1, char room4_name2, char room4_name3, char room4_name4, char room4_name5,
                          char room5_name1, char room5_name2, char room5_name3, char room5_name4, char room5_name5) {

    printf("\n===== Meeting Room Booking Records =====\n");

    printf("Meeting Room 1: ");
    if (room1 == BOOKED) {
        printf("Booked by %c%c%c%c%c\n", room1_name1, room1_name2, room1_name3, room1_name4, room1_name5);
    } else {
        printf("Available\n");
    }

    printf("Meeting Room 2: ");
    if (room2 == BOOKED) {
        printf("Booked by %c%c%c%c%c\n", room2_name1, room2_name2, room2_name3, room2_name4, room2_name5);
    } else {
        printf("Available\n");
    }

    printf("Meeting Room 3: ");
    if (room3 == BOOKED) {
        printf("Booked by %c%c%c%c%c\n", room3_name1, room3_name2, room3_name3, room3_name4, room3_name5);
    } else {
        printf("Available\n");
    }

    printf("Meeting Room 4: ");
    if (room4 == BOOKED) {
        printf("Booked by %c%c%c%c%c\n", room4_name1, room4_name2, room4_name3, room4_name4, room4_name5);
    } else {
        printf("Available\n");
    }

    printf("Meeting Room 5: ");
    if (room5 == BOOKED) {
        printf("Booked by %c%c%c%c%c\n", room5_name1, room5_name2, room5_name3, room5_name4, room5_name5);
    } else {
        printf("Available\n");
    }

    printf("=======================================\n");
}

int main() {
    /* Room status variables (0=available, 1=booked) */
    int room1, room2, room3, room4, room5;

    /* Room 1 booker name (5 characters) */
    char room1_name1, room1_name2, room1_name3, room1_name4, room1_name5;

    /* Room 2 booker name (5 characters) */
    char room2_name1, room2_name2, room2_name3, room2_name4, room2_name5;

    /* Room 3 booker name (5 characters) */
    char room3_name1, room3_name2, room3_name3, room3_name4, room3_name5;

    /* Room 4 booker name (5 characters) */
    char room4_name1, room4_name2, room4_name3, room4_name4, room4_name5;

    /* Room 5 booker name (5 characters) */
    char room5_name1, room5_name2, room5_name3, room5_name4, room5_name5;

    int choice, roomNumber;
    int continueBooking;

    /* Initialize all rooms as available */
    room1 = AVAILABLE;
    room2 = AVAILABLE;
    room3 = AVAILABLE;
    room4 = AVAILABLE;
    room5 = AVAILABLE;

    /* Set default empty characters for names */
    room1_name1 = room1_name2 = room1_name3 = room1_name4 = room1_name5 = ' ';
    room2_name1 = room2_name2 = room2_name3 = room2_name4 = room2_name5 = ' ';
    room3_name1 = room3_name2 = room3_name3 = room3_name4 = room3_name5 = ' ';
    room4_name1 = room4_name2 = room4_name3 = room4_name4 = room4_name5 = ' ';
    room5_name1 = room5_name2 = room5_name3 = room5_name4 = room5_name5 = ' ';

    continueBooking = 1; /* 1 = continue, 0 = exit */

    printf("Welcome to Meeting Room Booking System\n");

    while (continueBooking) {
        displayAvailableRooms(room1, room2, room3, room4, room5);

        printf("\nMenu:\n");
        printf("1. Book a meeting room\n");
        printf("2. Display all booking records\n");
        printf("3. Exit program\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            /* Book a meeting room */
            printf("Please select a room to book (1-5): ");
            scanf("%d", &roomNumber);

            if (roomNumber < 1 || roomNumber > 5) {
                printf("Invalid room number. Please try again.\n");
            }
            else if ((roomNumber == 1 && room1 == BOOKED) ||
                     (roomNumber == 2 && room2 == BOOKED) ||
                     (roomNumber == 3 && room3 == BOOKED) ||
                     (roomNumber == 4 && room4 == BOOKED) ||
                     (roomNumber == 5 && room5 == BOOKED)) {
                printf("Meeting Room %d is not available. Please select another room.\n", roomNumber);
            }
            else {
                /* Mark room as booked */
                if (roomNumber == 1) room1 = BOOKED;
                else if (roomNumber == 2) room2 = BOOKED;
                else if (roomNumber == 3) room3 = BOOKED;
                else if (roomNumber == 4) room4 = BOOKED;
                else if (roomNumber == 5) room5 = BOOKED;

                /* Get booker name */
                getBookerName(roomNumber,
                              &room1_name1, &room1_name2, &room1_name3, &room1_name4, &room1_name5,
                              &room2_name1, &room2_name2, &room2_name3, &room2_name4, &room2_name5,
                              &room3_name1, &room3_name2, &room3_name3, &room3_name4, &room3_name5,
                              &room4_name1, &room4_name2, &room4_name3, &room4_name4, &room4_name5,
                              &room5_name1, &room5_name2, &room5_name3, &room5_name4, &room5_name5);
            }
        } else if (choice == 2) {
            /* Display all booking records */
            displayBookingRecords(room1, room2, room3, room4, room5,
                                 room1_name1, room1_name2, room1_name3, room1_name4, room1_name5,
                                 room2_name1, room2_name2, room2_name3, room2_name4, room2_name5,
                                 room3_name1, room3_name2, room3_name3, room3_name4, room3_name5,
                                 room4_name1, room4_name2, room4_name3, room4_name4, room4_name5,
                                 room5_name1, room5_name2, room5_name3, room5_name4, room5_name5);
        } else if (choice == 3) {
            /* Exit program */
            continueBooking = 0;
            printf("Thank you for using the Meeting Room Booking System\n");
        } else {
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}
