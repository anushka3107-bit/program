#include<stdio.h>
#include<conio.h>
int main()
{
char s1[100] = "programming ", s2[] = "is awesome ";
int length = 0 ,j;

while( s1[length] != '\0')

{
  ++length;
}
for(j =0; s2[j] != '\0'; ++j)
{
 ++length;

 s1[length] = s2[j];

}

  s1[length] = '\0';

  printf("after concatenation :");

  puts(s1);

  return 0;


}

















