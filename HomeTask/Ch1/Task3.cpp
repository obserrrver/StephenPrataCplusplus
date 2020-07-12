#include <iostream> 
using namespace std;
int mice(void); //объявляем прототип функций для программы, чтоб она в курсе событий была
int run(void);

int main()
{
mice();
mice();
run();
run();
return 0;
}

int mice(void) //описываем функции
{
    cout << "Three blind mice" <<endl;
    return 0;
}

int run(void)
{
    cout << "See how they run" <<endl;
    return 0;
}