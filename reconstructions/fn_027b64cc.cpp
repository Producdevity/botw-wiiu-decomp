#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce98;
extern "C" RuntimeTag data_1048ce9c;
extern "C" const RuntimeVTable data_101306f4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101306e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101306d4;

typedef Token<&data_1048ce98, &data_1048ce9c, &data_101306f4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101306e4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101306d4> Type2;

extern "C" bool fn_027b64cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
