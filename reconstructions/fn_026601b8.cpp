#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c290;
extern "C" RuntimeTag data_1048c294;
extern "C" const RuntimeVTable data_10102ee4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10102ed4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10102ec4;

typedef Token<&data_1048c290, &data_1048c294, &data_10102ee4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10102ed4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10102ec4> Type2;

extern "C" bool fn_026601b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
