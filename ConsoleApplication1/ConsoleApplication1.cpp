
#include <stdio.h>
#include <string.h>
int main() {
    /*
    int r;
    char str[100];
    printf("Hello, World!\n");
    printf("Enter a int: ");
   // scanf_s("%s", str, sizeof(str));  // Reads until a newline is found
    scanf_s("%d", &r);
    printf("The entered int is: %d\n", r);

   // if (strcmp(str, "ff") == 0) {  // Compare the input string to "ff"
     //   printf("The string is 'ff'.\n");
        // You can place additional code here to do something when the string equals "ff"
   // }
   */
    bool loop = true;
    
    char text[900]="";
    printf("1-Append in the end, 2-Start new line, 3-Save to file, 4-load from file, 5-print to console, 6-Insert text by indexes, 7-search, 8-clear\n");
    while (loop == true) {
        char str;
        scanf_s(" %c", &str);
        while ((getchar()) != '\n');
        printf("The entered int is: %c\n", str);
        switch (str)
        {
        case '1':
        {
            printf("Append in the end\n");
            char appendText[200];
            fgets(appendText, sizeof(appendText), stdin); // reads the newline too, so you may want to remove it
            size_t len = strlen(appendText);
            if (len > 0 && appendText[len - 1] == '\n') {
                appendText[len - 1] = '\0'; // replace newline with null terminator
            }
            strcat_s(text, sizeof(text), appendText);
            printf("The entered text is: %s\n", text);
            break;
        }
        case '2':
            printf("Start new line\n");
            break;

        case '3':
            printf("Save to file\n");
            break;

        case '4':
            printf("load from file\n");
            break;
        case '5':
            printf("print to console\n");
            printf("The entered int is: %s\n", text);
            break;
        case '6':
            printf("Insert text by indexes\n");
            break;
        case '7':
            printf("search\n");
            break;
        case '8':
            printf("clear\n");
            break;


        default:
            printf("Error! operator is not correct\n");
        }
        
    }
    
    return 0;
}