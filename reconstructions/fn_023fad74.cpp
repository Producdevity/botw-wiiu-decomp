#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487f38;
extern "C" RuntimeTag data_10487f3c;
extern "C" const RuntimeVTable data_100a9644;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a960c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a95fc;

typedef Token<&data_10487f38, &data_10487f3c, &data_100a9644> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a960c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a95fc> Type2;

extern "C" bool fn_023fad74(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
