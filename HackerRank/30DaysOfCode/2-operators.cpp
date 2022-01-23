#include <iostream>
#include <cmath>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    cout << round(meal_cost + (meal_cost * tip_percent / 100) + (meal_cost * tax_percent / 100)) << endl;
}

int main()
{
    solve(100, 15, 8);
}
