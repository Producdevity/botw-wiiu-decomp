#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce3c;
extern "C" RuntimeTag data_1048ce38;
extern "C" const RuntimeVTable data_1012e624;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012e614;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012e604;

typedef Token<&data_1048ce3c, &data_1048ce38, &data_1012e624> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012e614> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012e604> Type2;

extern "C" bool fn_0279fb48(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
