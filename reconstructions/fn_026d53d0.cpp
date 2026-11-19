#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c6ec;
extern "C" RuntimeTag data_1048c6f0;
extern "C" const RuntimeVTable data_10114084;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10114074;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10114064;

typedef Token<&data_1048c6ec, &data_1048c6f0, &data_10114084> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10114074> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10114064> Type2;

extern "C" bool fn_026d53d0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
