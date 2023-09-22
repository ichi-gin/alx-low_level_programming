#include "main.h"

/**
 * rot13 - Encode a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    char *start = str;
    char *rot13_table_lower = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13_table_encoded = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    while (*str)
    {
        char *c = str;
        char *table = (*c >= 'a' && *c <= 'z') ? rot13_table_lower : ((*c >= 'A' && *c <= 'Z') ? rot13_table_encoded + 26 : NULL);

        if (table)
        {
            while (*table)
            {
                if (*c == *table)
                {
                    *c = *(table + 13);
                    break;
                }
                table++;
            }
        }
        str++;
    }

    return start;
}
