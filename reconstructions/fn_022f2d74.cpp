#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489a30;
extern "C" RuntimeTag data_10489a34;
extern "C" const RuntimeVTable data_1007b98c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007b97c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007b96c;

typedef Token<&data_10489a30, &data_10489a34, &data_1007b98c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007b97c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007b96c> Type2;

extern "C" bool fn_022f2d74(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
