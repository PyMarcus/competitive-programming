#include <iostream>
#include <vector>
using namespace std;

int max(vector<int> arr, int arrowHeight);
vector<int> sendArrow(vector<int> arr, int arrowHeight);
void printBalloons(vector<int> arr);

int main()
{
    int n = 5;
    int arrowsShot = 0;
    vector<int> balloons = {2, 1, 3, 4, 5};
    // vector<int> balloons = {6, 5, 4, 3, 2, 1};

    printBalloons(balloons);

    // Until destroy all balloons
    while (balloons.size() > 0)
    {
        // New arrow
        int arrowHeight = balloons.front();
        // Balloons after the arrow destruction
        balloons = sendArrow(balloons, arrowHeight);
        arrowsShot++;
    }

    cout << "flechas: " << arrowsShot << endl;

    return 0;
}

// Returns the highest balloon height
int max(vector<int> arr)
{
    int max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Returns the lowest balloon height
int min(vector<int> arr)
{
    int min = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Shot the arrow
vector<int> sendArrow(vector<int> arr, int arrowHeight)
{
    // if all the balloons are destroyed;
    if (arr.size() == 0)
        return arr;

    // if the arrow height is too low to hit more balloons
    if (arrowHeight < min(arr))
        return arr;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arrowHeight)
        {
            // destroy the balloon
            arr.erase(arr.begin() + i);
            arrowHeight--;
        }
    }

    printBalloons(arr);

    return sendArrow(arr, arrowHeight);
}

void printBalloons(vector<int> arr)
{
    for (int j = max(arr); j > 0; j--)
    {

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == j)
            {
                cout << arr[i];
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "===============================================\n";
}
