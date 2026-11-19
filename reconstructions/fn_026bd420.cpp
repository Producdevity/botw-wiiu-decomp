#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c5cc;
extern "C" RuntimeTag data_1048c5d0;
extern "C" const RuntimeVTable data_10110288;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10110278;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10110268;

typedef Token<&data_1048c5cc, &data_1048c5d0, &data_10110288> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10110278> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10110268> Type2;

extern "C" bool fn_026bd420(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
