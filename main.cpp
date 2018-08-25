#include <iostream>
#include <ctime>
#include "Stock0.h"
#include "Stack.h"
#include "MyTime.h"
#include "Verctor.h"
#include "Stonewt.h"
#include "StringBad.h"
#include "StringGood.h"
#include "TabaletennisPlayer.h"
#include "RatedPlayer.h"
#include "Brass.h"

void t1() {
    Stock0 stock0("Alo", 35, 2.4);
//    stock0.accquire("Yerro", 30, 2.5);
    stock0.show();

    std::cout << "------one transaction------" << std::endl;
    stock0.buy(30, 2.2);
    stock0.show();

    std::cout << "------one transaction------" << std::endl;
    stock0.buy(30, 2.5);
    stock0.show();


    std::cout << "------one transaction------" << std::endl;
    stock0.sell(90, 2.5);
    stock0.show();


    std::cout << "------All function execed------" << std::endl;
}

void t2() {
    Stack stack;
    Item item1 = 5;
    Item item2 = 6;
    stack.push(item1);
    stack.push(item2);
    stack.printStack();
    Item item3;
    stack.pop(item3);
    std::cout << "item3:" << item3 << std::endl;
    stack.printStack();
}

void t3() {
    MyTime time1(2, 33);
    MyTime time2(3, 40);
    MyTime time3 = time1 + time2;
    MyTime time4 = time3 - time2;
    MyTime time5 = time1 * 2;
    MyTime time6 = 2 * time1;

    std::cout << time1;  //
    std::cout << time3;  //
    std::cout << time4;  //
    std::cout << time5;  //
    std::cout << time6;  //
}

void t4() {
    using namespace VERCTOR;
    using namespace std;

    srand(time(0));

    double direction;
    Verctor step;
    Verctor result(0, 0, Verctor::POL);
    unsigned long steps;
    double target;
    double dstep;
    std::cout << "Enter taget distance" << std::endl;
    while (cin >> target) {
        cout << "Enter step length" << endl;
        if (cin >> dstep) {
            while (result.getMag() < target) {
                cout << "direction:" << direction;
                step.reset(dstep, direction, Verctor::POL);
                cout << step;
                result = result + step;
                cout << result;
                steps++;
            }
        } else {
            break;
        }
    }
}

void t5() {
    Stonewt stonewt(123.48);
    stonewt.showStn();
    stonewt.showLbs();

    Stonewt stonewt2(60, 22.33);
    stonewt2.showStn();
    stonewt2.showLbs();

    Stonewt t3;
    t3 = 123.45;
    t3.showStn();
    t3.showLbs();
}

void t6() {
    const char *str1 = new char[10]{'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', '\0'};
    StringBad stringBad(str1);


}

void t7() {
//    StringGood stringGood;
//    stringGood.show();
//
//    const char *str = "adcdefgh";
//    StringGood stringGood1(str);
//    stringGood1.show();
//
//    const char *str1 = new char[10]{'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', '\0'};
//    StringGood stringGood2(str1);
//    stringGood2.show();
//
//    StringGood stringGood3(stringGood2);
//    stringGood3.show();
//
//    StringGood* stringGood4 = &stringGood2;
//    stringGood4->show();
//
//    StringGood* stringGood5=new StringGood("adnmg");
//    stringGood5->show();
//
//    delete(stringGood5);


    StringGood *stringGood6 = new StringGood;
    {
        StringGood *stringGood7 = new StringGood();
        delete (stringGood7);
    };

    delete (stringGood6);
}


void t8() {
    TabaletennisPlayer player("Chunk", "Buzzer", true);
    TabaletennisPlayer player2("Tara", "Boomda", false);
    player.Name();
    if (player.HasTable()) {
        std::cout << "play hasTable" << std::endl;
    } else {
        std::cout << "has't a table" << std::endl;
    }
    player2.Name();
}


void t9() {
    RatedPlayer rplayer("alpha", "dest", true);
    TabaletennisPlayer &tp = rplayer;
    TabaletennisPlayer *tp2 = &rplayer;
    if (tp.HasTable()) {
        std::cout << "has" << std::endl;
    }
    tp.Name();

}

void t10() {
    Brass dll("Dide.Lanli", 11124, 4183.45);
    BrassPlus dog("Dog lei", 12118, 2592.00);
    dll.ViewAcct();
    dog.ViewAcct();
}

int main() {

    std::cout << "------open account------" << std::endl;
    t10();
    system("pause");
    return 0;
}