#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488204;
extern "C" RuntimeTag data_10488208;
extern "C" const RuntimeVTable data_1003a5ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003a5dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003a5cc;

typedef Token<&data_10488204, &data_10488208, &data_1003a5ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003a5dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003a5cc> Type2;

extern "C" bool fn_0218ddc8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
