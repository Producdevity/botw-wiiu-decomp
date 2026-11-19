#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bce0;
extern "C" RuntimeTag data_1048bce4;
extern "C" const RuntimeVTable data_100f42e0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f42d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f42c0;

typedef Token<&data_1048bce0, &data_1048bce4, &data_100f42e0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100f42d0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100f42c0> Type2;

extern "C" bool fn_025ff978(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
