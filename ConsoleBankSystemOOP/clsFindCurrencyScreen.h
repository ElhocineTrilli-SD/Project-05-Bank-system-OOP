
#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"

class clsFindCurrencyScreen :protected clsScreen
{
private:

	static void _PrintCurrency(clsCurrency Currency)
	{
        cout << "\nCurrency Card:";
        cout << "\n___________________";

        cout << "\nCountry   : " << Currency.Country();
        cout << "\nCode      : " << Currency.CurrencyCode();
        cout << "\nName      : " << Currency.CurrencyName();
        cout << "\nRate(1$)  : " << Currency.Rate();

      
        cout << "\n___________________\n";

    }
    static void _ShowResults(clsCurrency Currency)
    {
        if (!Currency.IsEmpty())
        {
            cout << "\nCurrency Found -:)";
            _PrintCurrency(Currency);
        }
        else
        {
            cout << "\nCurrency Was Not Found -:)";

        }
    }
public:

    static void ShowFindCurrencyScreen()
    {
        _DrawScreenHeader("\tFind Currency Screen");
        short Choice;
        cout << "\nFind by: [1] Code or [2] Country ? ";
        Choice = clsInputValidate::ReadNumberBetween(1, 2);

        if (Choice == 1)
        {
            string Code = "";
            cout << "\nPlease Enter CurrencyCode: ";
            Code = clsInputValidate::ReadString();
            clsCurrency Currency = clsCurrency::FindByCode(Code);
            _ShowResults(Currency);
        }
        else
        {
            string Country = "";
            cout << "\nPlease Enter Country Name : ";
            Country = clsInputValidate::ReadString();
            clsCurrency Currency = clsCurrency::FindByCountry(Country);
            _ShowResults(Currency);

        }

    }



};

