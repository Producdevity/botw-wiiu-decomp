#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104887b4;
extern "C" RuntimeTag data_104887b8;
extern "C" const RuntimeVTable data_1004ab58;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004ab48;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004ab38;

typedef Token<&data_104887b4, &data_104887b8, &data_1004ab58> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004ab48> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004ab38> Type2;

extern "C" bool fn_021e2ad8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
