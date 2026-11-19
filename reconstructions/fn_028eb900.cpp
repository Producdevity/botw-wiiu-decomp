#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dc08;
extern "C" RuntimeTag data_1048dc0c;
extern "C" const RuntimeVTable data_1015c95c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015c94c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015c93c;

typedef Token<&data_1048dc08, &data_1048dc0c, &data_1015c95c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015c94c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015c93c> Type2;

extern "C" bool fn_028eb900(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
