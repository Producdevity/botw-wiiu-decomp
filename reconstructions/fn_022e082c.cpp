#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048993c;
extern "C" RuntimeTag data_10489940;
extern "C" const RuntimeVTable data_10078b50;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10078b40;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10078b30;

typedef Token<&data_1048993c, &data_10489940, &data_10078b50> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10078b40> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10078b30> Type2;

extern "C" bool fn_022e082c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
