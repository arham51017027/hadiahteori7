#include <iostream.h>
#include <Conio.h>

main()
{
int a,b,c=10;
for (a=1; a<=4; a++)
        {
for(b=1; b<=a; b++)
    {
cout<<c<<" " ;
c--;
}
cout<<"\n";
cout<<"\n";
}
getch();
}