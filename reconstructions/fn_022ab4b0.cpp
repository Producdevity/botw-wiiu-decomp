#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489690;
extern "C" RuntimeTag data_10489694;
extern "C" const RuntimeVTable data_100722c8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100722b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100722a8;

typedef Token<&data_10489690, &data_10489694, &data_100722c8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100722b8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100722a8> Type2;

extern "C" bool fn_022ab4b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
