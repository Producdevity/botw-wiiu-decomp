#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488ff0;
extern "C" RuntimeTag data_10488fec;
extern "C" const RuntimeVTable data_10061498;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10061488;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10061478;

typedef Token<&data_10488ff0, &data_10488fec, &data_10061498> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10061488> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10061478> Type2;

extern "C" bool fn_0224ebc4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
