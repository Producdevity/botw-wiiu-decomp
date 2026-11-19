#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c79c;
extern "C" RuntimeTag data_1048c7a0;
extern "C" const RuntimeVTable data_10116cf0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10116ce0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10116cd0;

typedef Token<&data_1048c79c, &data_1048c7a0, &data_10116cf0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10116ce0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10116cd0> Type2;

extern "C" bool fn_026e562c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
