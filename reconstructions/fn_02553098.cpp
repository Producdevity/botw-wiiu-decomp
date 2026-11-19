#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b8d0;
extern "C" RuntimeTag data_1048b8d4;
extern "C" const RuntimeVTable data_100dd510;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100dd500;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dd4f0;

typedef Token<&data_1048b8d0, &data_1048b8d4, &data_100dd510> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100dd500> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100dd4f0> Type2;

extern "C" bool fn_02553098(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
