#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fc14;
extern "C" RuntimeTag data_10490578;
extern "C" const RuntimeVTable data_101b5128;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101b5108;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101b50f8;

typedef Token<&data_1048fc14, &data_10490578, &data_101b5128> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101b5108> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101b50f8> Type2;

extern "C" bool fn_02ba8ae0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
