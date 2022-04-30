#include <stdio.h>
#include <iostream>
#include <cmath>

void soal1(int input)
{
    // code to be executed
    float hasil_akar = sqrt(input);
    int counter = 0;

    if (input == 1)
    {
        std::cout << "lampu menyala";
    }
    else if (input == 2)
    {
        std::cout << "lampu mati";
    }
    else
    {
        for (int i = 1; i <= hasil_akar; i++)
        {
            int hasil_bagi = 0;
            if (input % i == 0)
            {
                counter++;
                hasil_bagi = input / i;
                if (hasil_bagi != i)
                {
                    counter++;
                }
            }
        }

        if (counter % 2 == 0)
        {
            std::cout << "lampu mati";
        }
        else
        {
            std::cout << "lampu menyala";
        }
    }
}

void soal2(int input)
{
    // code to be executed
    int hasil = 0;

    hasil = (input * (input + 1)) / 2;

    std::cout << hasil;
}

int main()
{
    int inputan;
    std::cin >> inputan;
    soal1(inputan);

    std::cout << "\n";

    int inputan2;
    std::cin >> inputan2;
    soal2(inputan2);

    std::cin.get();
}