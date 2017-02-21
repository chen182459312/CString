//
//  main.cpp
//  CString
//
//  Created by chentao on 17/1/23.
//  Copyright © 2017年   . All rights reserved.
//

#include <iostream>
#include "CString.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    CString strFir("hi");
    strFir.Show();
    
    CString strSec(strFir);
    strSec.Show();
    
    CString strThird;
    strThird = strFir;
    strThird.Show();
    
    return 0;
}
