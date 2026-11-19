#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104900e0;
extern "C" RuntimeTag data_10492d18;
extern "C" const RuntimeVTable data_102a9abc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a9aac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a9a9c;

typedef Token<&data_104900e0, &data_10492d18, &data_102a9abc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a9aac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a9a9c> Type2;

extern "C" bool fn_032d6218(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
