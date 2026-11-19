#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a1d8;
extern "C" RuntimeTag data_1048a1dc;
extern "C" const RuntimeVTable data_10091a04;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100919f4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100919e4;

typedef Token<&data_1048a1d8, &data_1048a1dc, &data_10091a04> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100919f4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100919e4> Type2;

extern "C" bool fn_0236f820(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
