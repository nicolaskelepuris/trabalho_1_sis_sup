#include "pch.h"
#include "CppUnitTest.h"
#include "../trabalho_1_sis_sup/Investimento.h"
#include "../trabalho_1_sis_sup/Investimento.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace trabalho_1;

namespace testestrabalho1sissup
{
	TEST_CLASS(testestrabalho1sissup)
	{
	public:
		
		TEST_METHOD(testeMontanteFinalJurosSimples)
		{
			Investimento investimento1(1000.0, 0.1, 10);
			Assert::AreEqual(2000.0, investimento1.GetMontanteFinalPeriodoJurosSimples());

			Investimento investimento2(1000.0, 0.1, 0);
			Assert::AreEqual(1000.0, investimento2.GetMontanteFinalPeriodoJurosSimples());

			Investimento investimento3(1000.0, 0.0, 10);
			Assert::AreEqual(1000.0, investimento3.GetMontanteFinalPeriodoJurosSimples());
		}

		TEST_METHOD(testeMontanteFinalJurosCompostos)
		{
			Investimento investimento1(1000.0, 0.1, 10);
			Assert::AreEqual(2594.0, round(investimento1.GetMontanteFinalPeriodoJurosCompostos()));

			Investimento investimento2(1000.0, 0.1, 0);
			Assert::AreEqual(1000.0, investimento2.GetMontanteFinalPeriodoJurosCompostos());

			Investimento investimento3(1000.0, 0.0, 10);
			Assert::AreEqual(1000.0, investimento3.GetMontanteFinalPeriodoJurosCompostos());
		}
	};
}
