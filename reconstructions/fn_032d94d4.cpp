#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901c8;
extern "C" RuntimeTag data_10492d74;
extern "C" const RuntimeVTable data_102aa2f8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102aa2e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102aa2d8;

typedef Token<&data_104901c8, &data_10492d74, &data_102aa2f8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102aa2e8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102aa2d8> Type2;

extern "C" bool fn_032d94d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
