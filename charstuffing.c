#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffed[200];
    int i, j = 0;

    printf("Enter data: ");
    scanf("%s", data);
    stuffed[j++] = 'F';

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == 'F' || data[i] == 'E') {
            stuffed[j++] = 'E';
        }

        stuffed[j++] = data[i];
    }
    stuffed[j++] = 'F';

    stuffed[j] = '\0';

    printf("After character stuffing: %s\n", stuffed);

    return 0;
}
