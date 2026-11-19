#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d938;
extern "C" RuntimeTag data_1048d93c;
extern "C" const RuntimeVTable data_1014fa34;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014fa24;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014fa14;

typedef Token<&data_1048d938, &data_1048d93c, &data_1014fa34> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1014fa24> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1014fa14> Type2;

extern "C" bool fn_02891a20(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
