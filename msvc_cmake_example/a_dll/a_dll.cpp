// a_dll.cpp : DLL을 위해 내보낸 함수를 정의합니다.
//

//#include "pch.h"
//#include "framework.h"
#include "a_dll.h"

#include <iostream>


// 내보낸 변수의 예제입니다.
ADLL_API int nadll=0;

// 내보낸 함수의 예제입니다.
ADLL_API int fnadll(void)
{
    return 0;
}

// 내보낸 클래스의 생성자입니다.
Cadll::Cadll()
{
    std::cout << __FUNCTION__ << "\n";

    return;
}
