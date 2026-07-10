#include <stdio.h>
#include <string.h> 

int main() {
    char username[20];
    char password[20];
    int attempts = 3; 
    int login_success = 0; 

    printf("CYBER SECURITY ACCESS CONTROL\n");

    while (attempts > 0 && login_success == 0) {
        printf("\nEnter Username: ");
        scanf("%s", username);

        printf("Enter Secret Password: ");
        scanf("%s", password);

        // Check if username and password are correct using strcmp function
        if (strcmp(username, "jay_pawar") == 0 && strcmp(password, "cyber123") == 0) {
            printf("\nACCESS GRANTED Welcome Agent %s\n", username);
            login_success = 1; // Set login success to 1 to stop the loop
        } else {
            attempts--; // Decrease the number of remaining attempts by 1
            if (attempts > 0) {
                printf("ACCESS DENIED Wrong username or password\n");
                printf("Warning You have %d attempts left\n", attempts);
            } else {
                printf("\nSYSTEM LOCKED Too many wrong attempts\n");
            }
        }
    }

    return 0;
}