
#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include <iomanip>
#include "clsListCurrenciesScreen.h"
#include "clsFindCurrencyScreen.h"
#include "clsUpdateRate.h"
#include "clsCalculateCurrencyScreen.h"




class clsCurrencyMenue :protected clsScreen
{
private:

    enum enCurrencyMenueOption{eListCurrencies = 1, eFindCurrencies = 2 , eUpdateRate = 3 ,
        eCurrencyCalculator = 4 , eMainMenue = 5
    };

    static short ReadCurrencyMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice = clsInputValidate::ReadNumberBetween(1, 5, "Enter Number between 1 to 5? ");
        return Choice;
    }

    static void _ShowListCurrencies()
    {
        // List Currencies will be here 
        clsListCurrenciesScreen::ShowListCurrenciesScreen();

    }

    static void _ShowFindCurrencyScreen()
    {
        // FindCurrencyScreen  will be here 
        clsFindCurrencyScreen::ShowFindCurrencyScreen();
    }

    static void _ShowUpdateRateScreen()
    {
        // Update rate will be here 
        clsUpdateRate::ShowUpdateRateScreen();
    }

    static void _ShowCurrencyCalculatorScreen()
    {
        // Currency Calculator rate will be here 
    clsCalculateCurrencyScreen::ShowCurrencyCalculatorScreen();
    }

    static void _GoBackToCurrencyMenue()
    {
        cout << "\n\nPress any key to go back to Currency Menue...";
        system("pause>0");
        ShowCurrencyMenue();

    }

    static void _PerformCurrencyMenueOption(enCurrencyMenueOption Currency)
    {

        switch (Currency)
        {

        case enCurrencyMenueOption::eListCurrencies:
        {
            system("cls");
            _ShowListCurrencies();
            _GoBackToCurrencyMenue();
            break;
        }

        case enCurrencyMenueOption::eFindCurrencies:
        {
            system("cls");
            _ShowFindCurrencyScreen();
            _GoBackToCurrencyMenue();
            break;
        }

        case enCurrencyMenueOption::eUpdateRate:
        {
            system("cls");
            _ShowUpdateRateScreen();
            _GoBackToCurrencyMenue();
            break;
        }

        case enCurrencyMenueOption::eCurrencyCalculator:
        {
            system("cls");
            _ShowCurrencyCalculatorScreen();
            _GoBackToCurrencyMenue();
            break;
        }
        case enCurrencyMenueOption::eMainMenue:
        {
            //do nothing here the main screen will handle it :-) ;

        }
        }

    }

public:

    static void ShowCurrencyMenue()
    {
        system("cls");
        _DrawScreenHeader("\t  Currency Exchange Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t  Currency Exchange Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
        cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
        cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
        cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
        cout << setw(37) << left << "" << "\t[5] Main Screen.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformCurrencyMenueOption((enCurrencyMenueOption)ReadCurrencyMenueOption());
    }

};

 