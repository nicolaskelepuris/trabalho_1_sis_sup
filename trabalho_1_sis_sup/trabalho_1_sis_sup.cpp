#include <iostream>
#include "Investimento.h"

using namespace trabalho_1;

int main()
{
    Investimento investimento1(1000.0, 0.1, 10);
    Investimento investimento2(1000.0, 0.2, 0);
    std::cout << investimento2.GetMontanteFinalPeriodoJurosSimples();
}
