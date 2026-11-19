#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c7ec;
extern "C" RuntimeTag data_1048c7f0;
extern "C" const RuntimeVTable data_10117ff8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10117fe8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10117fd8;

typedef Token<&data_1048c7ec, &data_1048c7f0, &data_10117ff8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10117fe8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10117fd8> Type2;

extern "C" bool fn_026ea8c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
