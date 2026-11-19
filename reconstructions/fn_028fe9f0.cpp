#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dc84;
extern "C" RuntimeTag data_1048dc88;
extern "C" const RuntimeVTable data_1015ebcc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015ebbc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015ebac;

typedef Token<&data_1048dc84, &data_1048dc88, &data_1015ebcc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015ebbc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015ebac> Type2;

extern "C" bool fn_028fe9f0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
