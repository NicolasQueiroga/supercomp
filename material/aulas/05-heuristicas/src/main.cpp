#include <iostream>
#include "aula05/heuristics.hpp"

using std::cin;
using std::cout;

int main(int argc, char **argv)
{
    int n, W;
    cout << "Enter the number of items in a Knapsack: ";
    cin >> n;
    cout << "Enter the capacity of knapsac: ";
    cin >> W;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cout << "item " << i;
        cout << "\nEnter value -> ";
        cin >> v[i];
        cout << "Enter weight -> ";
        cin >> w[i];
    }
    cout << "\nAns: " << knapSack(W, w, v, n) << '\n';
    return 0;
}