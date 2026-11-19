#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a338;
extern "C" RuntimeTag data_1048a33c;
extern "C" const RuntimeVTable data_10095e0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10095dfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10095dec;

typedef Token<&data_1048a338, &data_1048a33c, &data_10095e0c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10095dfc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10095dec> Type2;

extern "C" bool fn_02389ad0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
