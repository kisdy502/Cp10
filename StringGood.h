//
// Created by Administrator on 2018/8/17.
//

#ifndef CP10_STRINGGOOD_H
#define CP10_STRINGGOOD_H


class StringGood {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringGood();

    StringGood(const char *data);

    StringGood(StringGood &stringGood);


    ~StringGood();

    bool operator<(StringGood &sg) const;

    bool operator>(StringGood &sg) const;

    bool operator==(StringGood &sg) const;

    StringGood operator=(StringGood &sg);


    void show();


};


#endif //CP10_STRINGGOOD_H
