#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048af38;
extern "C" RuntimeTag data_1048af34;
extern "C" const RuntimeVTable data_100bab1c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bab0c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100baafc;

typedef Token<&data_1048af38, &data_1048af34, &data_100bab1c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100bab0c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100baafc> Type2;

extern "C" bool fn_0245c2e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
