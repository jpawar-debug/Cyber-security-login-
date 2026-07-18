#include <stdio.h>
#include <string.h> 

int main() {
    // Variables to store the master/registered credentials
    char username[20]; 
    char password[20]; 
    
    // Variables to store user inputs during login
    char entered_username[20]; 
    char entered_password[20]; 
    
    int attempts = 3; 
    int login_success = 0; 

    // === 1. REGISTRATION PHASE ===
    printf("=== CREATE YOUR CREDENTIALS ===\n");
    
    printf("Set New Username: ");
    scanf("%s", entered_username);
    // Copying the registered username into the master username variable
    strcpy(username, entered_username); 

    printf("Set Secret Password: ");
    scanf("%s", entered_password);
    // Copying the registered password into the master password variable
    strcpy(password, entered_password); 
    
    printf("\n✅ Account Created Successfully!\n");
    printf("===================================\n");

    // === 2. LOGIN PHASE ===
    printf("\nCYBER SECURITY ACCESS CONTROL\n");

    // Loop runs until attempts run out or login is successful
    while (attempts > 0 && login_success == 0) {
        printf("\nEnter Username to Login: ");
        scanf("%s", entered_username);

        printf("Enter Secret Password: ");
        scanf("%s", entered_password);

        // Compare the login inputs with the registered master credentials using strcmp
        if (strcmp(entered_username, username) == 0 && strcmp(entered_password, password) == 0) {
            printf("\n🔓 ACCESS GRANTED! Welcome Agent %s\n", username);
            login_success = 1; // Set success flag to 1 to break the loop
        } else {
            attempts--; // Reduce remaining attempts by 1
            if (attempts > 0) {
                printf("❌ ACCESS DENIED! Wrong username or password\n");
                printf("Warning: You have %d attempts left\n", attempts);
            } else {
                printf("\n🚨 SYSTEM LOCKED! Too many wrong attempts\n");
            }
        }
    }

    return 0;
}