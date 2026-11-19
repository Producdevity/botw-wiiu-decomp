#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488734;
extern "C" RuntimeTag data_10488738;
extern "C" const RuntimeVTable data_1004979c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004978c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004977c;

typedef Token<&data_10488734, &data_10488738, &data_1004979c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004978c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004977c> Type2;

extern "C" bool fn_021dd7c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
