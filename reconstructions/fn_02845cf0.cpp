#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d5e0;
extern "C" RuntimeTag data_1048d5e4;
extern "C" const RuntimeVTable data_10143f60;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10143f50;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10143f40;

typedef Token<&data_1048d5e0, &data_1048d5e4, &data_10143f60> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10143f50> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10143f40> Type2;

extern "C" bool fn_02845cf0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
