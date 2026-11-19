#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104870c8;
extern "C" RuntimeTag data_104870cc;
extern "C" const RuntimeVTable data_10010754;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10010744;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10010734;

typedef Token<&data_104870c8, &data_104870cc, &data_10010754> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10010744> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10010734> Type2;

extern "C" bool fn_0208893c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
