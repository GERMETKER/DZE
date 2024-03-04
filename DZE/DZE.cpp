#include <iostream>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    //задание1--------------------------------------------------
    int chislo;
    std::cout << "Введите шестизначное число: \n";
    std::cin >> chislo;
    int n1, n2, n3, n4, n5, n6;
    if (chislo < 1000000 && chislo > 99999)
    {
        n1 = chislo % 10;
        chislo = chislo / 10;
        n2 = chislo % 10;
        chislo = chislo / 10;
        n3 = chislo % 10;
        chislo = chislo / 10;
        n4 = chislo % 10;
        chislo = chislo / 10;
        n5 = chislo % 10;
        chislo = chislo / 10;
        n6 = chislo % 10;
        if (n1 + n2 + n3 == n4 + n5 + n6)
        {
            std::cout << "Ваше число - счастливое!\n";
        }
        else
        {
            std::cout << "Ваше число - не счастливое!\n";
        }
    }
    else
    {
        std::cout << "Ошибка! \n";
    }
    */
    /*
    //задание2--------------------------------------------------
    int chislo;
    std::cout << "Введите четырёхзначное число: \n";
    std::cin >> chislo;
    int n1, n2, n3, n4;
    if (chislo < 10000 && chislo > 999)
    {
        n1 = chislo % 10;
        chislo = chislo / 10;
        n2 = chislo % 10;
        chislo = chislo / 10;
        n3 = chislo % 10;
        chislo = chislo / 10;
        n4 = chislo % 10;
        std::cout << n3 << n4 << n1 << n2;
    }
    else
    {
        std::cout << "Ошибка! \n";
    }
    */
    /*
    //задание3--------------------------------------------------
    int num;
    int max;
    std::cout << "Введите число \n";
    std::cin >> max;
    int min = max;
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Введите число \n";
        std::cin >> num;
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    std::cout << "Минимальное число: " << min << " Максимальное число: " << max << "\n";
    */
    /*
    //задание4--------------------------------------------------
    int rast1;
    int rast2;
    int gruz;
    int rashod;
    std::cout << "Введите расстояние между пунктами A и B (км)";
    std::cin >> rast1;
    std::cout << "Введите расстояние между пунктами B и C (км)";
    std::cin >> rast2;
    std::cout << "Введите вес груза (кг)";
    std::cin >> gruz;
    int doz;
    if (gruz < 500)
    {
        rashod = 1;
    }
    else if (gruz > 500 && gruz < 1000)
    {
        rashod = 4;
    }
    else if (gruz > 1000 && gruz < 1500)
    {
        rashod = 7;
    }
    else if (gruz > 1500 && gruz < 2000)
    {
    rashod = 9;
}
else
{
    rashod = 100;
}
if (rast1 * rashod <= 700 && rast2 * rashod <= 700 && rashod < 10)
{
    doz = (rast2 * rashod) - (700 - (rast1 * rashod));
    if (doz > 0)
    {
        std::cout << "Минимальная дозаправка в пункте B: " << doz << " литров \n";
    }
    else
    {
        std::cout << "Дозаправка не требуется\n";
    }
}
else
{
    std::cout << "Полёт по введённому маршруту невозможен \n";
}
*/

    
    
    
    
    
    return 0;
}
