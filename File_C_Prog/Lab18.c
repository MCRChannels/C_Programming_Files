#include <stdio.h>

void printMenu();
void printRooms(int room1, int room2, int room3, int room4, int room5);

int main() {
    int room1 = 0, room2 = 0, room3 = 0, room4 = 0, room5 = 0;
    int option, room_number, people;
    float decimal_check;

    while (1) {

        printMenu();   // printf menu 1 - 4

        if (scanf("%d.%f", &option, &decimal_check) == 2) {
            printf("* Please enter only Integer *\n");
            continue;
        }

        if (option == 1) {  // Check-in
            printf("\nEnter room number (1-5): ");
            if (scanf("%d.%f", &option, &decimal_check) == 2) {
				printf("* Please enter only Integer *\n");
           		continue;
			}

            if (room_number < 1 || room_number > 5) {
                printf("* Please Enter room only (1-5) *\n");
                continue;
            }

            // Check if room is already Reservation
            if ((room_number == 1 && room1 > 0) ||
                (room_number == 2 && room2 > 0) ||
                (room_number == 3 && room3 > 0) ||
                (room_number == 4 && room4 > 0) ||
                (room_number == 5 && room5 > 0)) {
                printf("* Room %d is already Reservation. Please check-out first or choose another room. *\n", room_number);
                continue;
            }

            printf("Enter number of people: ");
            scanf("%d", &people);
            if (room_number == 1) room1 = people;
            else if (room_number == 2) room2 = people;
            else if (room_number == 3) room3 = people;
            else if (room_number == 4) room4 = people;
            else if (room_number == 5) room5 = people;
            printf("Checked in %d people to Room %d.\n", people, room_number); // input n people

        } else if (option == 2) {  // Check-out
            printf("\nEnter room number (1-5): ");
            if (scanf("%d.%f", &option, &decimal_check) == 2) {
				printf("* Please enter only Integer *\n");
			    continue;
			}
            if (room_number < 1 || room_number > 5) {
                printf("* Please Enter room only (1-5) *\n");
                continue;
            }
            if (room_number == 1) room1 = 0;
            else if (room_number == 2) room2 = 0;
            else if (room_number == 3) room3 = 0;
            else if (room_number == 4) room4 = 0;
            else if (room_number == 5) room5 = 0;
            printf("Checked out Room %d.\n", room_number);

        } else if (option == 3) {  // View rooms
            printRooms(room1, room2, room3, room4, room5);

        } else if (option == 4) {  // Exit
            printf("\nExiting program... Have a great day!\n");
            break;
        } else {
            printf("* Nah Invalid option. Please try again *\n");
        }
    }
    return 0;
}

void printMenu() {
    printf("\n========================================\n");
    printf("          RESERVE ROOM SYSTEM        \n");
    printf("========================================\n");
    printf("1. Check-in\n");
    printf("2. Check-out\n");
    printf("3. View room status\n");
    printf("4. Exit\n");
    printf("========================================\n");
    printf("Select an option: ");
}

void printRooms(int room1, int room2, int room3, int room4, int room5) {
    printf("\nROOM STATUS\n");
    printf("----------------------------------------\n");
    printf("Room 1 : %d people\n", room1);
    printf("Room 2 : %d people\n", room2);
    printf("Room 3 : %d people\n", room3);
    printf("Room 4 : %d people\n", room4);
    printf("Room 5 : %d people\n", room5);
    printf("----------------------------------------\n");
}
