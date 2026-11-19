#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c240;
extern "C" RuntimeTag data_1048c244;
extern "C" const RuntimeVTable data_10101c4c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10101c3c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10101c2c;

typedef Token<&data_1048c240, &data_1048c244, &data_10101c4c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10101c3c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10101c2c> Type2;

extern "C" bool fn_02659b58(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
