#include <iostream>
#include <vector>
using namespace std;
// int number_of_ones(int n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         n = (n & n - 1);
//         count++;
//     }
//     return count;
// }
int count = 0;
int ones(int n)
{
    if (n == 0)
    {
        return count;
    }
    n = n & (n - 1);
    count++;
    return ones(n);
}
vector<int> countBits(int n)
{
    vector<int> v;

    for (int i = 0; i <= n; i++)
    {
        v.push_back(ones(i));
    }
    return v;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    // int c = number_of_ones(n);
    int c = ones(n);
    // vector<int> vec=countBits(n);
    cout << endl;
    // for (int i = 0; i <vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    
    cout << c;
    return 0;
}