#include <iostream>

struct Address {
    std::string city;
    std::string street;
    std::string house;
    std::string apartment;
    uint postalCode;
};

void printAddress(Address address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.house << std::endl;
    std::cout << "Номер квартиры: " << address.apartment << std::endl;
    std::cout << "Индекс: " << address.postalCode << std::endl;
    std::cout << std::endl;
}

int main()
{
    Address address1 {
        "Москва",
        "Арбат",
        "12",
        "8",
        123456
    };
    printAddress(address1);

    Address address2 {
        "Ижевск",
        "Пушкина",
        "59",
        "143",
        953769
    };
    printAddress(address2);

    return 0;
}
