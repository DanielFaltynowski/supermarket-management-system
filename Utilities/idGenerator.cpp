#include <iostream>
#include <ctime>

using namespace std;

string idGenerator()
{
    string response = "";
    for (int i = 0; i < 10; i++)
    {
        int randomChar = 97 + rand() % (122 + 1 - 97);
        response = response + (char) randomChar;
    }

    return response;
}