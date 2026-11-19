#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b7a8;
extern "C" RuntimeTag data_1048b7ac;
extern "C" const RuntimeVTable data_10100818;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10100808;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101007f8;

typedef Token<&data_1048b7a8, &data_1048b7ac, &data_10100818> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10100808> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101007f8> Type2;

extern "C" bool fn_02652a30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
