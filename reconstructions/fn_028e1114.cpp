#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048db80;
extern "C" RuntimeTag data_1048db84;
extern "C" const RuntimeVTable data_1015a4a0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015a490;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015a480;

typedef Token<&data_1048db80, &data_1048db84, &data_1015a4a0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015a490> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015a480> Type2;

extern "C" bool fn_028e1114(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
