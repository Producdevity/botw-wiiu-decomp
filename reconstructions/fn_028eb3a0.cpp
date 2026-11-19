#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dbf8;
extern "C" RuntimeTag data_1048dbfc;
extern "C" const RuntimeVTable data_1015c7c4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015c7b4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015c7a4;

typedef Token<&data_1048dbf8, &data_1048dbfc, &data_1015c7c4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015c7b4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015c7a4> Type2;

extern "C" bool fn_028eb3a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
