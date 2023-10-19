#include<stdio.h>
#include<conio.h>
int main()
{
char line[150];
printf("enter a string :");
fgets(line,sizeof(line),stdin);

for(int i = 0,j;line[i] != '\0';++i)

{

while(!(line[i]>='a'&& line[i] <='z' )&& !(line[i] >= 'A' && line[i] <= 'z')&& !(line[i] == '\0'))
{
for(j=i;line[j] != '\0';++j)
{
line[j] = line [j+1];
}
line[j] = '\0';
}
}
printf("output string :");
puts(line);
return 0;
}
