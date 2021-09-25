#include <iostream>
#include "Investimento.h"

using namespace trabalho_1;

int main()
{
    Investimento investimento1(1000.0, 0.1);
    std::cout << investimento1.GetTaxaJurosMes();

    std::cout << '\n';

    Investimento investimento2(1000.0, 0.1, 10);
    Investimento investimento3(1000.0, 0.15, 10);
    bool same1 = investimento3.GetMontanteFinalPeriodoJurosCompostos() == Investimento::FindInvestimentoMaiorMontanteFinal(investimento2, investimento3).GetMontanteFinalPeriodoJurosCompostos();
    std::cout << same1;

    std::cout << '\n';


    Investimento investimento4(1000.0, 0.1, 10);
    Investimento investimento5(1000.0, 0.1, 0);
    bool same2 = investimento4.GetMontanteFinalPeriodoJurosCompostos() == Investimento::FindInvestimentoMaiorMontanteFinal(investimento4, investimento5).GetMontanteFinalPeriodoJurosCompostos();
    std::cout << same2;
}
