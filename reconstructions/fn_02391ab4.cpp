#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a390;
extern "C" RuntimeTag data_1048a394;
extern "C" const RuntimeVTable data_1009709c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009708c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009707c;

typedef Token<&data_1048a390, &data_1048a394, &data_1009709c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009708c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009707c> Type2;

extern "C" bool fn_02391ab4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
