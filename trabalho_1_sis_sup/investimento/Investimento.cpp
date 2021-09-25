#include "Investimento.h"
#include <math.h>

Investimento::Investimento(double montante, double taxaJurosAno)
{
    this->montante = montante;
    this->taxaJurosAno = taxaJurosAno;
    this->periodoInvestimentoAnos = 0;
}

Investimento::Investimento(double montante, double taxaJurosAno, int periodoInvestimentoAnos)
{
    this->montante = montante;
    this->taxaJurosAno = taxaJurosAno;
    this->periodoInvestimentoAnos = periodoInvestimentoAnos;
}

double Investimento::GetMontanteFinalPeriodoJurosSimples()
{
    double acrescimoPorAno = montante * taxaJurosAno;
    double acrescimoFinalPeriodo = acrescimoPorAno * periodoInvestimentoAnos;
    double montanteFinal = montante + acrescimoFinalPeriodo;
    return montanteFinal;
}

double Investimento::GetMontanteFinalPeriodoJurosCompostos()
{
    double juros = pow(1 + taxaJurosAno, periodoInvestimentoAnos);
    double montanteFinal = montante * juros;
    return montanteFinal;
}

double Investimento::GetTaxaJurosMes()
{
    return pow(1 + taxaJurosAno, 1.0/12.0) - 1;
}