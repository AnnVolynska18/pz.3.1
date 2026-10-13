#include <iostream>
#include <list>

using namespace std;

// Вивід списку за допомогою ітератора
void printList(const list<int>& lst) {
    for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // Початковий список
    list<int> numbers = {12, 18, 25, 31, 40};

    cout << "Початковий список: ";
    printList(numbers);

    // Додати 7 на початок і 60 у кінець
    numbers.push_front(7);
    numbers.push_back(60);

    cout << "Після додавання 7 на початок і 60 у кінець: ";
    printList(numbers);

    // Видалити перший елемент (через ітератор)
    list<int>::iterator it = numbers.begin();
    numbers.erase(it);

    cout << "Після видалення першого елемента: ";
    printList(numbers);

    return 0;
}