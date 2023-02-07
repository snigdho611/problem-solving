#include <bits/stdc++.h>

int main() {
    int user_input;
    while (1) {
        std::cin >> user_input;
        try {
            if (user_input > 0) {
                std::cout << "vai ter duas!" << std::endl;
            } else {
                std::cout << "vai ter copa!" << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }
}