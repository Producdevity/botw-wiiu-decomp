#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b71c;
extern "C" RuntimeTag data_1048b720;
extern "C" const RuntimeVTable data_100d7b78;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d7b68;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d7b58;

typedef Token<&data_1048b71c, &data_1048b720, &data_100d7b78> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100d7b68> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100d7b58> Type2;

extern "C" bool fn_02532e30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
