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
    std::cout << "Работаю в режиме тренировки" << std::endl;
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
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    result = a + b;
    std::cout << "Результат сложения: " << result << std::endl;
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
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    return 0;
}
#endif

#ifdef UNDEFINED_MODE
#error "Необходимо определить MODE"
#endif

    