#include <iostream>
using namespace std;

class Stack
{ // The class
public:
    int main;
    int *mainArray;
    int length;
    Stack(int size)
    {
        mainArray = new int[size];
        main = -1;
        length = size;
    }
    int push(int x)
    {
        if (main + 1 == length)
        {
            cout << "Stack Is Full!" << endl;
            return main;
        }
        else
        {
            main++;
            mainArray[main] = x;
            return main;
        }
    }
    int pull()
    {

        if (main == -1)
        {
            cout << "Stack Is MT!" << endl;
            return -1;
        }
        else
        {
            main--;
            return mainArray[main + 1];
        }
    }
};

class Queue
{ // The class
public:
    int last;
    int first;
    int *mainArray;
    int length;
    Queue(int size)
    {
        mainArray = new int[size];
        last = -1;
        first = -1;
        length = size;
    }
    void push(int x)
    {

        if (last == -1)
        {
            last = 0;
            first = 0;
            mainArray[last] = x;
        }
        else if ((last + 1 == length && first == 0) || last + 1 == first)
        {
            cout << "Queue Is Full!" << endl;
        }
        else if (last + 1 == length)
        {
            last = 0;
            mainArray[last] = x;
        }
        else
        {
            last++;
            mainArray[last] = x;
        }
    }
    int pull()
    {
        if (first == -1)
        {
            cout << "Queue Is MT!" << endl;
            return -1;
        }
        int pullItem = mainArray[first];
        if (first == last)
        {
            first = -1;
            last = -1;
        }
        else if (first + 1 == length)
        {
            first = 0;
        }
        else
        {
            first++;
        }
        return pullItem;
    }
};

int main()
{
    Queue que(10);
    Stack sta(10);
    for (int i = 1; i < 11; i++)
    {
        // push item In  que
        que.push(i);
    }

    for (int i = 0; i < 10; i++)
    {
        sta.push(que.pull());
    }
    for (int i = 1; i < 11; i++)
    {
        que.push(sta.pull());
    }
}