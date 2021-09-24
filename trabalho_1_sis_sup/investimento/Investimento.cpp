#include "Investimento.h"

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