#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

class Investimento
{
    private:
        double montante;
        double taxaJurosAno;
        int periodoInvestimentoAnos;

    public:
        Investimento(double montante, double taxaJurosAno);
        Investimento(double montante, double taxaJurosAno, int periodoInvestimentoAnos);

        double GetMontanteFinalPeriodoJurosSimples();
        double GetMontanteFinalPeriodoJurosCompostos();
        double GetTaxaJurosMes();
        static Investimento FindInvestimentoMaiorMontanteFinal(Investimento investimento1, Investimento investimento2);
};

#endif