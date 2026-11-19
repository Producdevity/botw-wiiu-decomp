#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fc4c;
extern "C" RuntimeTag data_104905b0;
extern "C" const RuntimeVTable data_101b7ac0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101b7ab0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101b7aa0;

typedef Token<&data_1048fc4c, &data_104905b0, &data_101b7ac0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101b7ab0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101b7aa0> Type2;

extern "C" bool fn_02bc10b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
