// b_dll.cpp : DLL을 위해 내보낸 함수를 정의합니다.
//

//#include "pch.h"
#include "b_dll.h"

#include "a_dll.h"

#include <iostream>

// 내보낸 변수의 예제입니다.
BDLL_API int nbdll=0;

// 내보낸 함수의 예제입니다.
BDLL_API int fnbdll(void)
{
    return 0;
}

// 내보낸 클래스의 생성자입니다.
Cbdll::Cbdll()
{
    std::cout << __FUNCTION__ << "\n";
    Cadll a;

    return;
}
