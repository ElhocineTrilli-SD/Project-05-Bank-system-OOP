#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"


class clsUpdateRate : protected clsScreen
{
private:
    static float _ReadRate()
    {
        
        cout << "\n\nEnter New Rate:";
        float NewRate = 0;

        NewRate = clsInputValidate::ReadNumber<float>();
        return NewRate;
        
    }
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

public :

    static void ShowUpdateRateScreen()
    {
        _DrawScreenHeader("\tUpadate Currency Screen");

        string Code ;
        cout << "\nPlease Enter CurrencyCode: ";
        Code = clsInputValidate::ReadString();

        while (!clsCurrency::IsCurrencyExist(Code))
        {
            cout << "\nCurrency is not found , choice another one.";
            Code = clsInputValidate::ReadString();
        }

        clsCurrency Currency = clsCurrency::FindByCode(Code);
        _PrintCurrency(Currency);

        cout << "\nAre you sure you want to update the rate of this currency y/n? ";
        char answer = 'n';
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            cout << "\nUpdate Currency Rate:";
            cout << "\n___________________";
          
            Currency.UpdateRate(_ReadRate());
            cout << "\nCurrency rate Updated Successfully -:)\n";
            _PrintCurrency(Currency);
        }
       
    }


};

