#include <iostream>
#include <string>
#include <cctype>

bool isValidPassword(const std::string& password) {
    // Kiem tra do dai mat khau
    if (password.length() != 8) {
        return false;
    }

    // Kiem tra moi ki tu co phai la so tu 0-9 khong
    for (char c : password) {
        if (!isdigit(c)) {
            return false;
        }
    }

    // Neu tat ca dieu kien dung thi mat khau hop le
    return true;
}

int main() {
    std::string password;
    std::cout << "Nhap mat khau: ";
    std::cin >> password;

    if (isValidPassword(password)) {
        std::cout << "Mat khau hop le." << std::endl;
    } else {
        std::cout << "Mat khau khong hop le." << std::endl;
    }

    return 0;
}

