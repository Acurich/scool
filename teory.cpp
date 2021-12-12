#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


//сотрировка
/*bool cmp(int a, int b){
    if (abs(a%10)>abs(b%10)){return true;}
    return false;
}
int main(){
vector <int> mas(6);
int a;
for (int i = 0; i < 6; i++){
    cin >> mas[i];
    mas.push_back(a);
}
for (int i = 0; i < 6; i++) {
    reverse(mas.begin(), mas.end());
}
for ( int i = 0; i < 6; i++){
    cout << mas[i] << " " ;
    //sort(a.begin(), a.end(), cmp)
}
}
*/

//бинпоиск

int main()
{
    int n;
    cin >> n;
    int intArray[n];
    for (int i = 0; i < n; i++)
    {
        cin >> intArray[i];
    }

    int x;
    cin >> x;
    int m, l = 0, r = n - 1;

/// Поиск самого левого элемента:
    while (l != r)
    {
        m = (l + r) / 2;
        if (intArray[m] < x)
            l = m + 1;
        else
            r = m;
    }
    if (intArray[l] == x)
        cout << "YES" << " ";
    else                     // если нет, вывести 0
        cout << "NO" << " ";

/// Поиск самого правого элемента:
    l = 0;
    r = n - 1;
    while (l < r - 1)
    {
        m = (l + r) / 2;
        if (intArray[m] <= x)
            l = m;
        else
            r = m - 1;
    }
    if (intArray[r] == x)
        cout << "YES" << endl;
    else if (intArray[l] == x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;   // если нет, вывести 0
    return 0;
}
