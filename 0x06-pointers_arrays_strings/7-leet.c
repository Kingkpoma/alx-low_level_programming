#include "main.h"

/**
* rot13 - encodes a string into rot13
* @s: string to encode
 *
* Return: address of s
*/
char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
