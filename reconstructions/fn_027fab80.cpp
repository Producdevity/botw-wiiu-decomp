#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d0c8;
extern "C" RuntimeTag data_1048d0cc;
extern "C" const RuntimeVTable data_10139418;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10139408;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101393f8;

typedef Token<&data_1048d0c8, &data_1048d0cc, &data_10139418> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10139408> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101393f8> Type2;

extern "C" bool fn_027fab80(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
