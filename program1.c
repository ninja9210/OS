#include <stdio.h>
#include <stdlib.h>
void createFile()
{
    FILE *fp = fopen("testfile.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file!\n");
    }
    else
    {
        printf("File created successfully!\n");
        fclose(fp);
    }
}
void writeFile()
{
    FILE *fp = fopen("testfile.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
    }
    else
    {
        fprintf(fp, "Welcome to C programming\nThis is a sample program\n");
        printf("Data written successfully!\n");
        fclose(fp);
    }
}
void readFile()
{
    FILE *fp = fopen("testfile.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
    }
    else
    {
        char ch;
        printf("File contents:\n");
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }
        fclose(fp);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\nFile Handling Operations");
        printf("\n1. Create a file");
        printf("\n2. Write data into a file");
        printf("\n3. Read a file");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline character
        switch (choice)
        {
        case 1:
            createFile();
            break;
        case 2:
            writeFile();
            break;
        case 3:
            readFile();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter a valid choice!\n");
        }
    } while (choice != 4);
    return 0;
}