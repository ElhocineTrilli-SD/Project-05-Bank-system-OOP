
#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrencyMenue.h"
#include "clsCurrency.h";



class clsListCurrenciesScreen : clsScreen
{

    static void PrintCurrencyRecordLine(clsCurrency Currency)
    {

    
        cout << "\t| " << setw(30) << left << Currency.Country();
        cout << "| " << setw(12) << left << Currency.CurrencyCode();
        cout << "| " << setw(30) << left << Currency.CurrencyName();
        cout << "| " << setw(10) << left << Currency.Rate();
        
    }

public :

	static void ShowListCurrenciesScreen()
	{
		vector <clsCurrency> vCurrency = clsCurrency::GetCurrenciesList();
		string Titel = "\tCurrencies list Screen";
		string subTitel = "\t(" + to_string(vCurrency.size()) + ") Currency";

		_DrawScreenHeader(Titel, subTitel);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_______________________________________________\n" << endl;

        cout << "\t| " << left << setw(30) << "Country";
        cout << "| " << left << setw(12) << "Code";
        cout << "| " << left << setw(30) << "Name";
        cout << "| " << left << setw(10) << "Rate/(1$)";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_______________________________________________\n" << endl;

        if (vCurrency.size() == 0)
        {
            cout << "\t\t\t\tNo Currency Available In the System!";
        }
        else
        {

            for (clsCurrency C : vCurrency)
            {
                PrintCurrencyRecordLine(C);
                cout << endl;
            }

        }
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "____________________________________________________\n" << endl;

	}

};

