#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488b14;
extern "C" RuntimeTag data_10488b10;
extern "C" const RuntimeVTable data_10053484;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10053434;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10053424;

typedef Token<&data_10488b14, &data_10488b10, &data_10053484> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10053434> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10053424> Type2;

extern "C" bool fn_022090c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
