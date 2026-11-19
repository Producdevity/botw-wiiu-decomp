#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487644;
extern "C" RuntimeTag data_10487648;
extern "C" const RuntimeVTable data_1029f420;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029f410;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029f400;

typedef Token<&data_10487644, &data_10487648, &data_1029f420> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029f410> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029f400> Type2;

extern "C" bool fn_03281170(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
