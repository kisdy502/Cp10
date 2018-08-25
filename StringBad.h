//
// Created by Administrator on 2018/8/16.
//

#ifndef CP10_STRINGBAD_H
#define CP10_STRINGBAD_H


class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad();

    StringBad(const char *_str);


    ~StringBad();

    friend std::ostream &operator<<(std::ostream &os, const StringBad &stringBad);

    StringBad operator=(StringBad &sb);

};


#endif //CP10_STRINGBAD_H
