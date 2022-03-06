#include <boost/locale.hpp>
#include <iostream>
#include "../Application/Application.h"
#include "../Core/Core.h"

using namespace std;
using namespace boost::locale;

int main()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    // Display a message using current system locale
    std::cout << format(translate("Task Management\n"));
    std::cout << "******************************\n";
    std::cout << format(translate("From UI library\n"));
    CCore core;
    core.functionCore();
    CApplication app;
    app.ApplicationFunction();

}

