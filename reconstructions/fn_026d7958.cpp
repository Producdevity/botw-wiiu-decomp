#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c700;
extern "C" RuntimeTag data_1048c704;
extern "C" const RuntimeVTable data_101145bc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10114584;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10114574;

typedef Token<&data_1048c700, &data_1048c704, &data_101145bc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10114584> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10114574> Type2;

extern "C" bool fn_026d7958(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
