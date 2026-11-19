#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a044;
extern "C" RuntimeTag data_1048a048;
extern "C" const RuntimeVTable data_1008d054;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008d044;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008d034;

typedef Token<&data_1048a044, &data_1048a048, &data_1008d054> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008d044> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008d034> Type2;

extern "C" bool fn_023551fc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
