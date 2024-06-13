#include <iostream>
#include <string>

class MetodaPlatnosci {
public:
    double kwota;
    std::string waluta;
    MetodaPlatnosci(double kwota, std::string waluta) {
        this->kwota = kwota;
        this->waluta = waluta;
    }
    virtual bool zrealizujPlatnosc() = 0;
    virtual void wyswietlSzczegoly() = 0;
};

class KartaKredytowa : public MetodaPlatnosci {
public:
    std::string numerKarty;
    std::string dataWaznosci;
    std::string cvv;
    KartaKredytowa(double kwota, std::string waluta, std::string numerKarty, std::string dataWaznosci, std::string cvv) : MetodaPlatnosci(kwota, waluta) {
        this->numerKarty = numerKarty;
        this->dataWaznosci = dataWaznosci;
        this->cvv = cvv;
    }
    bool zrealizujPlatnosc() {
        if (numerKarty.length() == 16 && dataWaznosci.length() == 5 && cvv.length() == 3) {
            return true;
        } else {
            return false;
        }
    }
    void wyswietlSzczegoly() {
        std::cout << "Karta kredytowa: " << numerKarty << ", Data waznosci: " << dataWaznosci << ", CVV: " << cvv << std::endl;
        std::cout << "Wypłacono: " << kwota << " " << waluta << "." << std::endl;
    }
};

class PayPal : public MetodaPlatnosci {
public:
    std::string email;
    PayPal(double kwota, std::string waluta, std::string email) : MetodaPlatnosci(kwota, waluta) {
        this->email = email;
    }
    bool zrealizujPlatnosc() {
        if (email.find("@") != std::string::npos) {
            return true;
        } else {
            return false;
        }
    }
    void wyswietlSzczegoly() {
        std::cout << "PayPal: " << email << std::endl;
        std::cout << "Wypłacono: " << kwota << " " << waluta << "." << std::endl;
    }
};

class PrzelewBankowy : public MetodaPlatnosci {
public:
    std::string numerKonta;
    std::string nazwaBanku;
    PrzelewBankowy(double kwota, std::string waluta, std::string numerKonta, std::string nazwaBanku) : MetodaPlatnosci(kwota, waluta) {
        this->numerKonta = numerKonta;
        this->nazwaBanku = nazwaBanku;
    }
    bool zrealizujPlatnosc() {
        if (numerKonta.length() == 26) {
            return true;
        } else {
            return false;
        }
    }
    void wyswietlSzczegoly() {
        std::cout << "Przelew bankowy: " << numerKonta << ", Nazwa banku: " << nazwaBanku << std::endl;
        std::cout << "Wypłacono: " << kwota << " " << waluta << "." << std::endl;
    }
};

   double kwota = 0;
   char wybor = 0;

int main() {
    while (true) {
        std::cout << "Wybierz metode platnosci: " << std::endl;
        std::cout << "1. Karta kredytowa" << std::endl;
        std::cout << "2. PayPal" << std::endl;
        std::cout << "3. Przelew bankowy" << std::endl;
        std::cout << "4. Wyjscie" << std::endl;
        
        try 
        {
            std::cin >> wybor;
            if (std::cin.fail()) 
            {
                throw std::runtime_error("Nieprawidlowy wybor. Sprobuj ponownie.");
            }
        } catch (std::runtime_error& e) 
        {
            std::cout << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        switch (wybor) 
        {
            case '1':
            {
                std::string numerKarty;
                std::string dataWaznosci;
                std::string cvv;
                std::cout << "Podaj kwote: ";
                std::cin >> kwota;
                std::cout << "Podaj numer karty: ";
                std::cin >> numerKarty;
                std::cout << "Podaj date waznosci (MM/RR): ";
                std::cin >> dataWaznosci;
                std::cout << "Podaj CVV: ";
                std::cin >> cvv;
                KartaKredytowa karta(kwota, "PLN", numerKarty, dataWaznosci, cvv);
                if (karta.zrealizujPlatnosc()) 
                {
                    karta.wyswietlSzczegoly();
                    karta.zrealizujPlatnosc();
                } 
                else 
                {
                    std::cout << "Nieprawidlowe dane karty kredytowej." << std::endl;
                }
                break;
            }
            case '2':
            {
                std::string email;
                std::cout << "Podaj kwote: ";
                std::cin >> kwota;
                std::cout << "Podaj email: ";
                std::cin >> email;
                PayPal paypal(kwota, "PLN", email);
                if (paypal.zrealizujPlatnosc()) 
                {
                    paypal.wyswietlSzczegoly();
                    paypal.zrealizujPlatnosc();
                } 
                else 
                {
                    std::cout << "Nieprawidlowy email." << std::endl;
                }
                break;
            }
            case '3':
            {
                std::string numerKonta;
                std::string nazwaBanku;
                std::cout << "Podaj kwote: ";
                std::cin >> kwota;
                std::cout << "Podaj numer konta: ";
                std::cin >> numerKonta;
                std::cout << "Podaj nazwe banku: ";
                std::cin >> nazwaBanku;
                PrzelewBankowy przelew(kwota, "PLN", numerKonta, nazwaBanku);
                if (przelew.zrealizujPlatnosc()) 
                {
                    przelew.wyswietlSzczegoly();
                    przelew.zrealizujPlatnosc();
                } 
                else 
                {
                    std::cout << "Nieprawidlowy numer konta." << std::endl;
                }
                break;
            }
            case '4':
            {
                return 0;
            }

        }



    }

    return 0;
}
