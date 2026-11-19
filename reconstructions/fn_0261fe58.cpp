#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c008;
extern "C" RuntimeTag data_1048c004;
extern "C" const RuntimeVTable data_100f8c3c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f8c2c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f8c1c;

typedef Token<&data_1048c008, &data_1048c004, &data_100f8c3c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100f8c2c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100f8c1c> Type2;

extern "C" bool fn_0261fe58(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
