#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cb88;
extern "C" RuntimeTag data_1048cb8c;
extern "C" const RuntimeVTable data_10124910;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10124900;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101248f0;

typedef Token<&data_1048cb88, &data_1048cb8c, &data_10124910> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10124900> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101248f0> Type2;

extern "C" bool fn_02756164(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
