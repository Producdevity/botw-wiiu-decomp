#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b64c;
extern "C" RuntimeTag data_1048b650;
extern "C" const RuntimeVTable data_100d4e04;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d4df4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d4de4;

typedef Token<&data_1048b64c, &data_1048b650, &data_100d4e04> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100d4df4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100d4de4> Type2;

extern "C" bool fn_02515efc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
