#include <stdio.h>
int main() {
char data[100];
int i, count = 0;
printf("Enter stuffed bits: ");
scanf("%s", data);
printf("De-stuffed data: ");
for(i = 0; data[i] != '\0'; i++) {
printf("%c", data[i]);
if(data[i] == '1')
count++;
else
count = 0;
if(count == 5) {
i++;
count = 0;
}
}
return 0;
}
