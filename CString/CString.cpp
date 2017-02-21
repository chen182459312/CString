//
//  CString.cpp
//  CString
//
//  Created by chentao on 17/1/23.
//  Copyright © 2017年   . All rights reserved.
//

#include "CString.hpp"

CString::CString(const char *pStr) {
    cout<<__func__<<endl;
    Clear();
    if (pStr) {
        size_t length = strlen(pStr);
        m_pStr = new char[length+1];
        memset(m_pStr, 0, length+1);
        memcpy(m_pStr, pStr, length);
    }
}

CString::CString(const CString &other) {
    cout<<__func__<<endl;
    Clear();
    if (other.m_pStr) {
        size_t length = strlen(other.m_pStr);
        m_pStr = new char[length+1];
        memset(m_pStr, 0, length+1);
        memcpy(m_pStr, other.m_pStr, length);
    }
}

CString& CString::operator=(const CString &other) {
    cout<<__func__<<endl;
    if (this != &other) {
        if (other.m_pStr) {
            Clear();
            size_t length = strlen(other.m_pStr);
            m_pStr = new char[length+1];
            memset(m_pStr, 0, length+1);
            memcpy(m_pStr, other.m_pStr, length);
        }
    }
    return *this;
}

CString::~CString() {
    cout<<this<<"  "<<__func__<<endl;
    Clear();
}


void CString::Show() {
    cout<<"value:"<<m_pStr<<"\t"<<"adress:"<<&m_pStr<<endl;
}

void CString::Clear() {
    if (m_pStr) {
        delete [] m_pStr;
        m_pStr = nullptr;
    }
}
