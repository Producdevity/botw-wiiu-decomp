#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104885f0;
extern "C" RuntimeTag data_104885f4;
extern "C" const RuntimeVTable data_1004528c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004527c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004526c;

typedef Token<&data_104885f0, &data_104885f4, &data_1004528c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004527c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004526c> Type2;

extern "C" bool fn_021cc888(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
