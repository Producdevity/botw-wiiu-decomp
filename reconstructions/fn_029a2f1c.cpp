#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e3a4;
extern "C" RuntimeTag data_1048e3a0;
extern "C" const RuntimeVTable data_10177108;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101770f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101770e8;

typedef Token<&data_1048e3a4, &data_1048e3a0, &data_10177108> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101770f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101770e8> Type2;

extern "C" bool fn_029a2f1c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
