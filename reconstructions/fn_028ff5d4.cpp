#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dc8c;
extern "C" RuntimeTag data_1048dc90;
extern "C" const RuntimeVTable data_1015eef4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015eee4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015eed4;

typedef Token<&data_1048dc8c, &data_1048dc90, &data_1015eef4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015eee4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015eed4> Type2;

extern "C" bool fn_028ff5d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
