//
//  CString.hpp
//  CString
//
//  Created by chentao on 17/1/23.
//  Copyright © 2017年   . All rights reserved.
//

#ifndef CString_hpp
#define CString_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class CString {
    
public:
    explicit CString(const char *pStr = nullptr);
    explicit CString(const CString &other);//deep copy
    CString & operator = (const CString &other);
    ~CString();
    void Show();

private:
    void Clear();
    
private:
    char *m_pStr;
};

#endif
