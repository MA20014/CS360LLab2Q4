#include <iostream>
#include <string>

class MusicIns {
private:
    std::string string_instruments[5] = {"Veena", "guitar", "sitar", "sarod", "mandolin"};
    std::string wind_instruments[5] = {"Flute", "clarinet", "saxophone", "nadaswaram", "piccolo"};
    std::string perc_instruments[5] = {"Table", "mridangam", "bongos", "drums", "tambour"};

public:
    void string_inst() {
        std::cout << "String Instruments:" << std::endl;
        for (const auto& instrument : string_instruments) {
            std::cout << instrument << std::endl;
        }
    }

    void wind_inst() {
        std::cout << "Wind Instruments:" << std::endl;
        for (const auto& instrument : wind_instruments) {
            std::cout << instrument << std::endl;
        }
    }

    void perc_inst() {
        std::cout << "Percussion Instruments:" << std::endl;
        for (const auto& instrument : perc_instruments) {
            std::cout << instrument << std::endl;
        }
    }

    void get() {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "a. String Instruments" << std::endl;
        std::cout << "b. Wind Instruments" << std::endl;
        std::cout << "c. Percussion Instruments" << std::endl;
        char choice;
        std::cin >> choice;
        switch (choice) {
            case 'a':
                string_inst();
                break;
            case 'b':
                wind_inst();
                break;
            case 'c':
                perc_inst();
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    }
};

int main() {
    MusicIns music;
    music.get();
    return 0;
}
