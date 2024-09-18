#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // создание пустого стека
    stack<string> myStack;
    // добавление элементов
    myStack.push("Maths");
    myStack.push("Physics");
    myStack.push("Programming");
    myStack.push("PE");
    // удаление элемента
    myStack.pop();
    // вывод на экран всех элементов стека
    while (!myStack.empty()) {
        cout << myStack.top() << endl;
        myStack.pop(); // т.к. стек имеет структуру LIFO для получения следующего элемента нужно удалить предыдущий
    }
    /*элементы выводятся в обратном порядке от порядка добавления, 
    т.е. первым выводится тот элемент, что был добавлен последним*/
}
