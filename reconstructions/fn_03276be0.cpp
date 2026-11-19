#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049024c;
extern "C" RuntimeTag data_10492960;
extern "C" const RuntimeVTable data_1029d650;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1029d640;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029d630;

typedef Token<&data_1049024c, &data_10492960, &data_1029d650> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1029d640> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029d630> Type2;

extern "C" bool fn_03276be0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
