#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bb04;
extern "C" RuntimeTag data_1048bb00;
extern "C" const RuntimeVTable data_100e4560;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e4550;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e4540;

typedef Token<&data_1048bb04, &data_1048bb00, &data_100e4560> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e4550> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e4540> Type2;

extern "C" bool fn_0258102c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
