#ifndef StrCopyIncluded /* prevent multiple inclusion */
#define StrCopyIncluded

char *strcopy(char *inStr); /* like strdup */
int strlength(char *s);
char ** mytoc(char *str, char delim);
char *copyToken(int start, int size, char *str);
void printTokens(char **vector);
int isEqual(char *comp, char *to);
#endif // included
