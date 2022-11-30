
#include <iostream>
#include <Windows.h>

#define MODE 1

#if !defined(MODE)
#error Ошибка, констатна не определена
#elif MODE == 1
int add(int a, int b) {
	return a + b;
}
#define STATE	int a = 0; \
				int b = 0; \
				std::cout << "Работаю в боевом режиме\n";\
				std::cout << "Введите число 1: ";\
				std::cin >> a; \
				std::cout << "Введите число 2: ";\
				std::cin >> b;\
				std::cout << "Результат сложения: " << add(a, b);

#elif MODE == 0

#define STATE std::cout<<"Работаю в тестовом режиме";

#else

#define STATE std::cout<<"Неизвестный режим. Завершение работы";

#endif

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	STATE;
}
