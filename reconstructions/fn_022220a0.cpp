#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488de8;
extern "C" RuntimeTag data_10488de4;
extern "C" const RuntimeVTable data_10059c0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10059bfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10059bec;

typedef Token<&data_10488de8, &data_10488de4, &data_10059c0c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10059bfc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10059bec> Type2;

extern "C" bool fn_022220a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
