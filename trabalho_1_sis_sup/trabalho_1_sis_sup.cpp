#include <iostream>
#include "Investimento.h"

using namespace trabalho_1;

int main()
{
    Investimento investimento1(1000, 0.1, 10);
    Investimento investimento2(1000, 0.2, 10);
    std::cout << investimento1.GetMontanteFinalPeriodoJurosCompostos();
}
