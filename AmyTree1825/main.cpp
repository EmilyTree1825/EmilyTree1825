#include <stdio.h>
#include <time.h>
#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

int main ()
{
    time_t timer;
    struct tm epoch;
    double amytree1825;
    
    epoch.tm_hour = 11; epoch.tm_min = 1; epoch.tm_sec = 0;
    epoch.tm_year = 81; epoch.tm_mon = 2; epoch.tm_mday = 8;
    epoch.tm_isdst = 1;
    
    time(&timer);
    amytree1825 = difftime(timer,mktime(&epoch));
    
    char word[3];
    strncpy(word, "now", 3);
    // PERSONA NON-GRATA
    printf ("The Program version is %.f epoch and is %s certified and is %s accredited for ""space delta"" and ""space-x"" by the CISSP and the ", amytree1825, word, word);
}

// [1] http://www.bryongloden.com
// [2] http://stackoverflow.com/questions/32725066/how-to-suppress-program-ended-with-exit-code-0-when-running-c-program-in-xc
// [3] https://developer.apple.com/xcode/