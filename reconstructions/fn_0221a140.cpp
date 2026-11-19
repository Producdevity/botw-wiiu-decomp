#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488d08;
extern "C" RuntimeTag data_10488d0c;
extern "C" const RuntimeVTable data_10057d0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10057cfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10057cec;

typedef Token<&data_10488d08, &data_10488d0c, &data_10057d0c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10057cfc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10057cec> Type2;

extern "C" bool fn_0221a140(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
