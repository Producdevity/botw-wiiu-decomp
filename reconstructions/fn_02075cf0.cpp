#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486e94;
extern "C" RuntimeTag data_10486e98;
extern "C" const RuntimeVTable data_1000c918;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000c8c8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000c8b8;

typedef Token<&data_10486e94, &data_10486e98, &data_1000c918> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000c8c8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000c8b8> Type2;

extern "C" bool fn_02075cf0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
