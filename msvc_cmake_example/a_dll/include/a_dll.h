﻿// 다음 ifdef 블록은 DLL에서 내보내는 작업을 더 간소화하는 매크로를 만드는
// 표준 방법입니다. 이 DLL에 들어 있는 파일은 모두 명령줄에 정의된 ADLL_EXPORTS 기호로
// 컴파일됩니다. 이 DLL을 사용하는 프로젝트에서는 이 기호를 정의할 수 없습니다.
// 이렇게 하면 소스 파일에 이 파일이 포함된 다른 모든 프로젝트에서는
// ADLL_API 함수를 DLL에서 가져오는 것으로 표시되는 반면, 이 DLL에서는
// 이 매크로로 정의된 기호가 내보내지는 것으로 표시됩니다.

// https://stackoverflow.com/questions/2164827/explicitly-exporting-shared-library-functions-in-linux 
// Explicitly exporting shared library functions in Linux
#if defined(_MSC_VER)
	#ifdef ADLL_EXPORTS
	#define ADLL_API __declspec(dllexport)
	#else
	#define ADLL_API __declspec(dllimport)
	#endif
#elif defined(__GNUC__)
	#ifdef ADLL_EXPORTS
	#define ADLL_API __attribute__((visibility("default")))
	#else
	#define ADLL_API
	#endif

#endif// 

// 이 클래스는 dll에서 내보낸 것입니다.
class ADLL_API Cadll {
public:
	Cadll(void);
	// TODO: 여기에 메서드를 추가합니다.
};

extern ADLL_API int nadll;

ADLL_API int fnadll(void);
