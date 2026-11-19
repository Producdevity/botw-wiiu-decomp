#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104883d4;
extern "C" RuntimeTag data_104883d8;
extern "C" const RuntimeVTable data_1003ed4c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003ed3c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003ed2c;

typedef Token<&data_104883d4, &data_104883d8, &data_1003ed4c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003ed3c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003ed2c> Type2;

extern "C" bool fn_021a9a38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
