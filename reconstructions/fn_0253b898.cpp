#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b780;
extern "C" RuntimeTag data_1048b784;
extern "C" const RuntimeVTable data_100d9108;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d90f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d90e8;

typedef Token<&data_1048b780, &data_1048b784, &data_100d9108> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100d90f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100d90e8> Type2;

extern "C" bool fn_0253b898(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
