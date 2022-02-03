#include <windows.h>
#include<iostream>
#include<cstdlib>
#include <unistd.h>
#include<time.h>

using namespace std;

int main()
{
   cout<<"Opening Registered Website......"<<endl;
   usleep(3000000);
   ShellExecute(NULL, "open", "INSER URL HERE",    //Enter the URL of the website
                NULL, NULL, SW_SHOWNORMAL);
   usleep(3000000);  //Delay between the commands
   SetCursorPos(X, Y); //Coordinates of the postition of the click
   usleep(3000000);
   mouse_event( MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0 ); //Mouse Left-Click Press
   mouse_event( MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );   // Mouse Left-Click Release
   usleep(4000000);

   cout<<"Opened website successfully..."<<endl;
   
   struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);                                 //Time of the execution of code
    printf("%s", asctime(ptr));
    return 0;

   return 0;
}