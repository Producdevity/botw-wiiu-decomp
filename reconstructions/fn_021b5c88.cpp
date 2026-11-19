#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488454;
extern "C" RuntimeTag data_10488458;
extern "C" const RuntimeVTable data_10040a5c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10040a4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10040a3c;

typedef Token<&data_10488454, &data_10488458, &data_10040a5c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10040a4c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10040a3c> Type2;

extern "C" bool fn_021b5c88(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
