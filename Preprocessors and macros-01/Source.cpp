#include <iostream>
#include <Windows.h>

#define MODE 1

#ifdef MODE
#if MODE == 0
#define TRAINING_MODE
#elif MODE == 1
#define BATTLE_MODE
#else
#define UNKNOWN_MODE
#endif
#else
#define UNDEFINED_MODE
#endif

#ifdef TRAINING_MODE
void add(int a, int b) {
    std::cout << "������� � ������ ����������" << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    add(0, 0);
    return 0;
}
#endif

#ifdef BATTLE_MODE
void add(int a, int b) {
    int result = a + b;
    std::cout << "������� � ������ ������" << std::endl;
    std::cout << "������� ����� 1: ";
    std::cin >> a;
    std::cout << "������� ����� 2: ";
    std::cin >> b;
    result = a + b;
    std::cout << "��������� ��������: " << result << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    add(0, 0);
    return 0;
}
#endif

#ifdef UNKNOWN_MODE
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "����������� �����. ���������� ������" << std::endl;
    return 0;
}
#endif

#ifdef UNDEFINED_MODE
#error "���������� ���������� MODE"
#endif

    