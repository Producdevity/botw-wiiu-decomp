#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a1c4;
extern "C" RuntimeTag data_1048a1c0;
extern "C" const RuntimeVTable data_10091580;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10091570;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10091560;

typedef Token<&data_1048a1c4, &data_1048a1c0, &data_10091580> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10091570> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10091560> Type2;

extern "C" bool fn_0236ed84(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
