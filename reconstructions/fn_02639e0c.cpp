#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c124;
extern "C" RuntimeTag data_1048c128;
extern "C" const RuntimeVTable data_100fce98;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fce88;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fce78;

typedef Token<&data_1048c124, &data_1048c128, &data_100fce98> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fce88> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fce78> Type2;

extern "C" bool fn_02639e0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
