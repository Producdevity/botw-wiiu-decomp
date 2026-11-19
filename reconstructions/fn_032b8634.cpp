#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488440;
extern "C" RuntimeTag data_10492c9c;
extern "C" const RuntimeVTable data_102a5d54;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a5d44;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a5d34;

typedef Token<&data_10488440, &data_10492c9c, &data_102a5d54> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a5d44> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a5d34> Type2;

extern "C" bool fn_032b8634(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
