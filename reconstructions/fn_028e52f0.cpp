#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dba0;
extern "C" RuntimeTag data_1048dba4;
extern "C" const RuntimeVTable data_1015b270;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015b260;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015b250;

typedef Token<&data_1048dba0, &data_1048dba4, &data_1015b270> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015b260> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015b250> Type2;

extern "C" bool fn_028e52f0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
