#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048df44;
extern "C" RuntimeTag data_1048df48;
extern "C" const RuntimeVTable data_101683a8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10168398;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10168388;

typedef Token<&data_1048df44, &data_1048df48, &data_101683a8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10168398> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10168388> Type2;

extern "C" bool fn_0292b698(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
