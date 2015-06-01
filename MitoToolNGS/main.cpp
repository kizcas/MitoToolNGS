/* 
 * File:   main.cpp
 * Author: fanlong
 *
 * Created on 2015年6月1日, 上午11:08
 */

#include <cstdlib>
#include <iostream>
#include <boost/regex.hpp>
#include <regex>
#include <string>

using namespace std;
using namespace boost;
/*
 * 
 */
int main(int argc, char** argv) {
    std::string s = "Boost Libraries";
    //boost::regex expr{"\\w+\\s\\w+"};
    std::regex expr{"\\w+\\s\\w+"};
    std::cout << std::boolalpha << std::regex_match(s, expr) << '\n';
    return 0;
}


