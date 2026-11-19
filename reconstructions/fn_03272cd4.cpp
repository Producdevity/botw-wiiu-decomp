#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049019c;
extern "C" RuntimeTag data_10492954;
extern "C" const RuntimeVTable data_1029c9ac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1029c99c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029c98c;

typedef Token<&data_1049019c, &data_10492954, &data_1029c9ac> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1029c99c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029c98c> Type2;

extern "C" bool fn_03272cd4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
