#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ba68;
extern "C" RuntimeTag data_1048ba6c;
extern "C" const RuntimeVTable data_100e1460;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e1450;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e1440;

typedef Token<&data_1048ba68, &data_1048ba6c, &data_100e1460> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e1450> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e1440> Type2;

extern "C" bool fn_02566c48(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
