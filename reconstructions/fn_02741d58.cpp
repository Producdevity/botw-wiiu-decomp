#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cad8;
extern "C" RuntimeTag data_1048cad4;
extern "C" const RuntimeVTable data_10121db8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10121da8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10121d98;

typedef Token<&data_1048cad8, &data_1048cad4, &data_10121db8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10121da8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10121d98> Type2;

extern "C" bool fn_02741d58(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
