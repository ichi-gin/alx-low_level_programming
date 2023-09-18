#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 62 /* 26 lowercase letters + 26 uppercase letters + 10 digits */

int main(void)
{
char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[101];
int i;

srand(time(NULL)); /* Seed the random number generator with the current time */

for (i = 0; i < 100; i++)
{
int random_index = rand() % PASSWORD_LENGTH;
password[i] = valid_chars[random_index];
}

password[100] = '\0'; /* Null-terminate the password */

printf("%s\n", password);

return (0);
}
