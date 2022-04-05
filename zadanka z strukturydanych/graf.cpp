#include <iostream>
#include <vector>
const int MAX = 1001;

std::vector<int> graf[MAX];
int w, k;
bool skierowany;
void wczytaj_graf(int w, int k, int skierowany)
{
    for (int i = 0; i < k; i++)
    {
        int x, y;
        std::cin >> x >> y;
        graf[x].push_back(y);
        if (!skierowany)
        {
            graf[y].push_back(x);
        }
    }
}
void wypisz_graf()
{
    for (int i = 1; i <= w; i++)
    {
        std::cout << i << ": ";
        for (int j = 0; j < graf[i].size(); j++)
        {
            std::cout << graf[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cin >> w >> k >> skierowany;
    wczytaj_graf(w, k, skierowany);
    wypisz_graf();
}