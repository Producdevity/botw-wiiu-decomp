#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cf54;
extern "C" RuntimeTag data_1048cf58;
extern "C" const RuntimeVTable data_10134e78;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10134e58;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10134e48;

typedef Token<&data_1048cf54, &data_1048cf58, &data_10134e78> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10134e58> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10134e48> Type2;

extern "C" bool fn_027e0880(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
