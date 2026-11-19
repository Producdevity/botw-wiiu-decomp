#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e2fc;
extern "C" RuntimeTag data_1048e2f8;
extern "C" const RuntimeVTable data_10173fe8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10173fd8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10173fc8;

typedef Token<&data_1048e2fc, &data_1048e2f8, &data_10173fe8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10173fd8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10173fc8> Type2;

extern "C" bool fn_02985d78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
