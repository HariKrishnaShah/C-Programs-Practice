#include <stdio.h>
#include <ctype.h>

int main()
{
   char ch, y;
   printf("Enter any character\n");
   scanf("%c", &ch);
   
   y = toupper(ch);

   if(isalpha(ch))
   printf ( "\nEntered character is converted into " \
            "upper character : %c\n", y );
   else
   printf("Entered character is not an alphabetic");
}
