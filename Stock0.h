//
// Created by Administrator on 2018/8/13.
//

#ifndef CP10_STOCK0_H
#define CP10_STOCK0_H

#include <string>

class Stock0 {
private:
    std::string company;    // 公司
    long shares;            //持有的股票数
    double share_val;       //股票价格
    double total_val;       // 总价值
    void set_total();

public:
    Stock0(const std::string &company, long num, double price);
    ~Stock0();
    void accquire(const std::string &company, long num, double price);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

//inline function
inline void Stock0::set_total() {
    this->total_val = share_val * shares;
}


#endif //CP10_STOCK0_H
