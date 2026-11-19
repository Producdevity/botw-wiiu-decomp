#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cac0;
extern "C" RuntimeTag data_1048cabc;
extern "C" const RuntimeVTable data_101213e0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101213d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101213c0;

typedef Token<&data_1048cac0, &data_1048cabc, &data_101213e0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101213d0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101213c0> Type2;

extern "C" bool fn_0273c750(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
