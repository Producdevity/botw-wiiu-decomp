#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488d8c;
extern "C" RuntimeTag data_10488d90;
extern "C" const RuntimeVTable data_10058b1c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10058b0c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10058afc;

typedef Token<&data_10488d8c, &data_10488d90, &data_10058b1c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10058b0c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10058afc> Type2;

extern "C" bool fn_0221d268(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
