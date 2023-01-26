#include <bits/stdc++.h>
#define ll long long int
using namespace std;

char randAlp(int num);
bool findInArray(int arr[], int num, int pairNum);

int main()
{

    srand(time(NULL));
    while (1)
    {
        char chs;
        int pairNum;
        printf("Continue? Yes or No(y/n): ");
        cin >> chs;

        if (chs == 'y')
        {
            cout << "Number of Pairs to be Genereated: ";
            cin >> pairNum;
            int player[pairNum], team[pairNum];
            char nameOfTeam[pairNum];
            int pl, tm;
            for (int i = 0; i < pairNum; i++)
            {

                do
                {
                    pl = rand() % pairNum + 1;
                } while (findInArray(player, pl, pairNum));
                player[i] = pl;
                do
                {
                    tm = rand() % pairNum + 1;
                } while (findInArray(team, tm, pairNum));
                team[i] = tm;
                nameOfTeam[i] = randAlp(tm);
            }

            for (int i = 0; i < pairNum; i++)
            {
                cout << player[i] << "-" << nameOfTeam[i] << endl;
                player[i] = team[i] = nameOfTeam[i] = 0;
            }
        }
        else
            exit(1);
    }
    return 0;
}

char randAlp(int num)
{
    if (num == 1)
        return 'A';
    else if (num == 2)
        return 'B';
    else if (num == 3)
        return 'C';
    else if (num == 4)
        return 'D';
    else if (num == 5)
        return 'E';
    else if (num == 6)
        return 'F';
    else if (num == 7)
        return 'G';
    else if (num == 8)
        return 'H';
    else if (num == 9)
        return 'I';
    else if (num == 10)
        return 'J';
    else if (num == 11)
        return 'K';
    else if (num == 12)
        return 'L';
    else if (num == 13)
        return 'M';
    else if (num == 14)
        return 'N';
    else if (num == 15)
        return 'O';
    else if (num == 16)
        return 'P';
    else if (num == 17)
        return 'Q';
    else if (num == 18)
        return 'R';
    else if (num == 19)
        return 'S';
    else if (num == 20)
        return 'T';
    else if (num == 21)
        return 'U';
    else if (num == 22)
        return 'V';
    else if (num == 23)
        return 'W';
    else if (num == 24)
        return 'X';
    else if (num == 25)
        return 'Y';
    else if (num == 26)
        return 'Z';
    else
        return '*';
}

bool findInArray(int arr[], int num, int pairNum)
{
    for (int i = 0; i < pairNum; i++)
    {
        if (arr[i] == num)
            return true;
    }
    return false;
}