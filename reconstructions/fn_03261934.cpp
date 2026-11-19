#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104879f8;
extern "C" RuntimeTag data_104879fc;
extern "C" const RuntimeVTable data_10299b00;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10299af0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10299ae0;

typedef Token<&data_104879f8, &data_104879fc, &data_10299b00> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10299af0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10299ae0> Type2;

extern "C" bool fn_03261934(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
