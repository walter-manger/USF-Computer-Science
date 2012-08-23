
#include <stdio.h>
#include <string.h>

char *duplicate(const char *p);

int main(int argc, char *argv[])
{
   char str[20];
   
   strcpy(str,"tire-bouchon");
   strcpy(&str[4], "d-or-wi");
   strcat(str,"red?");
   
   printf("%s\n\n", str);
   
   printf("Duplicate: String1 = %s, String2 = %s", "Here is a test", duplicate("Here is a test"));
   
   getchar();
   getchar();
   return 0;
   
}

char const *duplicate(const char *p)
{
   char *q;
   strcpy(q,p);
   return q;
}