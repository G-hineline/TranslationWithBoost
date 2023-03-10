
#include <boost/locale.hpp>
#include <iostream>
#include "newFunction.h"
#include "..\LocalizationUtils\LocalizationUtils.h"

using namespace std;
using namespace boost::locale;

void newFunction()
{
    std::cout << Localize("alphabet", "letter") << std::endl;
    std::cout << Localize("mail", "letter") << std::endl;
    std::cout << Localize("file", "open") << std::endl;
    std::cout << Localize("internet connection", "open") << std::endl;
}