#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048da1c;
extern "C" RuntimeTag data_1048da18;
extern "C" const RuntimeVTable data_10152220;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10152210;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10152200;

typedef Token<&data_1048da1c, &data_1048da18, &data_10152220> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10152210> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10152200> Type2;

extern "C" bool fn_0289d1c4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
