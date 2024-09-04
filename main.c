#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

void secret_function()
{
    FILE *file = fopen("secret_password.txt", "r");

    // Check if the file was successfully opened
    if (file == NULL)
    {
        printf("Error: Could not open the file.\n");
        exit(1);
    }

    char password[100]; // Adjust size based on expected password length

    // Read the password from the file
    if (fgets(password, sizeof(password), file) != NULL)
    {
        printf("The secret password is: %s\n", password);
    }
    else
    {
        printf("Error: Could not read the password from the file.\n");
    }

    // Close the file
    fclose(file);
}

int main(int argc, char *argv[])
{
    char buffer[200];

    if (argc > 2)
    {
        strcpy(buffer, argv[1]);
        printf("%s. U shall  not pass!!\n", buffer);
    }
    else
    {
        printf("Enter ur name, dumbass!\n");
        exit(1);
    }

    return 0;
}
