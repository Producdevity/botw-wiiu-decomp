#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a300;
extern "C" RuntimeTag data_1048a304;
extern "C" const RuntimeVTable data_10095614;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10095604;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100955f4;

typedef Token<&data_1048a300, &data_1048a304, &data_10095614> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10095604> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100955f4> Type2;

extern "C" bool fn_02387044(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
