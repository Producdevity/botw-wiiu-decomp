#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b548;
extern "C" RuntimeTag data_1048b54c;
extern "C" const RuntimeVTable data_100d229c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d228c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d227c;

typedef Token<&data_1048b548, &data_1048b54c, &data_100d229c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100d228c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100d227c> Type2;

extern "C" bool fn_0250753c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
