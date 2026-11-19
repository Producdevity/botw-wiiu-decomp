#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cbf0;
extern "C" RuntimeTag data_1048cbf4;
extern "C" const RuntimeVTable data_1012615c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012614c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012613c;

typedef Token<&data_1048cbf0, &data_1048cbf4, &data_1012615c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012614c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012613c> Type2;

extern "C" bool fn_0275dc58(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
