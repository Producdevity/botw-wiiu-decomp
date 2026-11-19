#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489a44;
extern "C" RuntimeTag data_10489a40;
extern "C" const RuntimeVTable data_1007bcb8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007bca8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007bc98;

typedef Token<&data_10489a44, &data_10489a40, &data_1007bcb8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007bca8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007bc98> Type2;

extern "C" bool fn_022f4518(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
