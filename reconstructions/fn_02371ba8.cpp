#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a1f0;
extern "C" RuntimeTag data_1048a1f4;
extern "C" const RuntimeVTable data_100922b4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100922a4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10092294;

typedef Token<&data_1048a1f0, &data_1048a1f4, &data_100922b4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100922a4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10092294> Type2;

extern "C" bool fn_02371ba8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
