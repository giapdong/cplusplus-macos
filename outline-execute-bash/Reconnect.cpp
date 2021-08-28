#include <bits/stdc++.h>

using namespace std;

#define CONNECT_ROUTER "\
#/bin/bash \n\
echo \n\
echo \"Trying connect to 192.168.1.1\" \n\
echo \n\
ping -t 10 192.168.1.1 & sleep 5; kill $!\
"

#define CONNECT_NEIGHBOR "\
#/bin/bash \n\
echo \n\
echo \"Trying connect to 192.168.1.112\" \n\
echo \n\
ping -t 10 192.168.1.112 & sleep 5; kill $!\
"

#define CONNECT_GOOGLE "\
#/bin/bash \n\
echo \n\
echo \"Trying connect to google\" \n\
echo \n\
ping -t 10 google.com & sleep 5; kill $!\
exit 0\
"

int main()
{
    system(CONNECT_ROUTER);
    system(CONNECT_NEIGHBOR);
    system(CONNECT_GOOGLE);
}